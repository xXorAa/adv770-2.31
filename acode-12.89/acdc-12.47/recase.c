#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "acdc.h"
#include "const.h"

/* The payload function is the recase() function, supporting UTF8 charsets
 *
 * void recase(int casing, char *string, char *recased, int room)
 *
 *   casing   is the desired casing: 'L', 'U', or 'C' (for Capitalise)
 *   string   points to the string to be recased
 *   recased  points to buffer into which recased string is to be placed
 *   room     gives the length of the buffer pointed at by out
 */

int utf8_to_unicode(char *line, unsigned index, unsigned len, unsigned *res) 
{
/*
 * Convert a UTF-8 sequence to its unicode value, and return the length of
 * the sequence in bytes. NB Invalid UTF-8 will be converted to a one-byte
 * sequence.
 */
  if (index >= len) 
  {
    *res = 0;
    return 0;
  }

  unsigned value;
  unsigned char c = line[index];
  unsigned bytes, mask, i;

  *res = c;
  line += index;
  len -= index;
  if (c < 0xc0) return 1;  /* 0... is ASCII, 10... invalid, assume Latin1 */
  mask = 0x20;
  bytes = 2;               /* So at least two chars byte long */
  while (c & mask) 
  {
    bytes++;             /* Count the leading ones, i.e. number of bytes */
    mask >>= 1;
  }
  if (bytes > MAX_UTF8_LEN || bytes > len)  /* Invalid, so single byte */
    return 1;
  value = c & (mask-1);
  for (i = 1; i < bytes; i++) /* Extract unicode bits from those bytes */
  {
    c = line[i];
    if ((c & 0xc0) != 0x80) return 1;
    value = (value << 6) | (c & 0x3f);
  }
  if (value > MAX_UTF8_CHAR) return 1; /* Not valid, so single byte */
  *res = value;                        /* Unicode value to be returned */
  return bytes;                        /* The UTF8 encoding's length */
}

static void reverse_string(char *begin, char *end)
{
 do 
 {
   char a = *begin, b = *end;
   *end = a; *begin = b;
   begin++; end--;
  } while (begin < end);
}

unsigned unicode_to_utf8(unsigned int c, char *utf8) 
{
/*
 * Convert a unicode value to its canonical utf-8 sequence.
 * NB: We do not check for (or care about) the "invalid" unicode values.
 */
  int bytes = 1;
  *utf8 = c;
  if (c >= 0x80)    /* It's multi-byte */
  {
    unsigned int prefix = 0x80;
    unsigned max = 0x3f;
    char *p = utf8;
    do 
    {
      *p++ = 0x80 + (c & 0x3f);
      bytes++;
      prefix = 0x80 | (prefix >> 1);
      max >>= 1;
      c >>= 6;            /* We use 6-bits in each extension byte */
    } while (c > max);
    *p = (prefix | c);      /* Add in the final byte */
    reverse_string(utf8, p);
  }
  return bytes;
}

void recase(int casing, char *string, char *recased, int room)
{
# include "utf8.h"   /* Pull in ordered case remapping pairs */
  unsigned gph;
  unsigned *cm;
  unsigned char buf [4 * MAXLINE];
  unsigned char *ob = buf;
  int len;
  
  while (*string)
  {
    if ((unsigned char)*string < 0x80 || 
      (len = utf8_to_unicode (string, 0, 4, &gph)) == 1)
    {
      *ob++ = casing == 'L' ? tolower(*string) : toupper(*string);
      string++;
    }
    else
    {
      cm = casing == 'L' ? u2l : l2u;     /* Which case mapping ? */
      string += len;
      while (*cm)
      {
        if (*cm == gph)       /* Found it */
        {
          gph = *(cm + 1);    /* Do the recasing */
          break;
        }
        if (*cm > gph)        /* Char not recasable */
          break;
        cm += 2;              /* Look at the next pair */
      }
      ob += unicode_to_utf8 (gph, ob);  /* Encode to UTF8 */
    }
    if (casing == 'C') casing = 'L'; /* Rest is lower case */
  }
  *ob = '\0';
  len = strlen(buf);
  if (len < room)
    strcpy (recased, buf);
  else if (len == room)
    strncpy (recased, buf, len);
  else
    gripe ("", "Insufficient buffer for re-casing!");
}
