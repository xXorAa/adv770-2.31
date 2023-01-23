/* libtest.c: A-code kernel extras - copyright Mike Arnautov 1990-2022, licensed
* under GPL (version 3 or later) or the Modified BSD Licence, whichever   
 * is asserted by the supplied LICENCE file. GPL3 if no licence file.
 */
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
extern char *advturn(char *);

int main(int argc, char **argv)
{
  char command[1024];
  char *response;
  char *list[1024];
  char *mode;
  char *ptr;
  int saved = 0;
  int resume = 0;
  int ok;
  int i;
  
  if (argc > 2 || (argc == 2 && strcmp (*(argv + 1), "-html") != 0) )
  {
    printf ("Usage: %s [-html]\n", *argv);
    return 1;
  }
  mode = (argc == 2 ? "HTML" : "TEXT");

/*
  * Saved game names cannot start with (or contain) '.'. except
  * for the automatic, persistent state save -- if present, it
  * will be the first list entry.
  */
  ptr = advturn("_LIST_");   /* Get list of saved games */
  if (ptr)
  {
    while (ptr && *ptr)
    {
      if (*ptr == '.')
         resume = 1;
      else
        list[saved++] = ptr;
      if ((ptr = strchr(ptr, '|')))
        *ptr++ = '\0';
    }
  }  
  
  command[1023] = '\0';

  if (resume == 0 && saved == 0)
  {
    sprintf(command, "_START_%s", mode);
    puts ("There are no saved games. Starting a new one.\n");
  }
  else
  {
    char choice[128];
    puts ("To start a new game, type START.");
    if (resume)
      puts ("To resume your game in progress, type RESUME.");
    choice[63] = '\0';
    if (saved)
    {
      puts ("To restore a saved game type its save-name.");
      printf ("%s", "Available saved games:");
      for (i = 0; i < saved; i++)
        printf(" %s", *(list + i));
      puts ("");
    }
    while (1)
    {
      printf ("%s: ", "Your choice (in full and in upper case)");
      fgets (choice, 63, stdin);
      *(choice + strlen(choice) - 1) = '\0';
      ok = 2;
      if (strcmp ("START", choice) == 0) break;
      if (resume && strcmp ("RESUME", choice) == 0) break;
//      if (strncmp ("START", choice, strlen(choice)) == 0) break;
//      if (resume && strncmp ("RESUME", choice, strlen(choice)) == 0) break;
      ok = 0;
      for (i = 0; i < saved; i++)
      {
        if (strcmp (*(list + i), choice) == 0)
        {
          ok = 1;
          break;
        }
      }
      if (ok) break;
      puts ("Invalid choice. Please try again.");
       }
    if (ok == 1)
       sprintf (command, "_LOAD_%s_%s", mode, choice);
    else
       sprintf (command, "_%s_%s_", choice, mode);
  }

  initialise(".");
  while (1)
  {
    response = advturn(command);
    printf("\n%s", *response ? response + 1 : "? ");
    if (*mode == 'H') putchar ('\n');
    if (*response == 'f')
      break;
    fgets(command, 1023, stdin);
  }
  puts("");
}
