#!/bin/bash
#
# lib.sh: common code for bash A-code utilities
#
BIN=$(dirname $(which $0))
[ "$BIN" = '.' ] && BIN=$(pwd)    # Needed for MacOS
ADV=$(dirname $BIN)
KDIR="$ADV/kernel"
ADIR="$ADV/acdc"
#
# Sanitise PATH, allowing for emscripten.
#
cline="$@"    # Preserve the command line
RIFS="$IFS"
IFS=: 
set -- $PATH  # Split PATH
IFS="$RIFS"
PATH=''
while [ $# -gt 0 ]; do
  case "$1" in
    /bin|/usr*|*/ems*) 
      [ -n "$PATH" ] && PATH="$PATH:"
      PATH="$PATH$1"
    ;;
    *) ;;
  esac
  shift
done
PATH="$PATH:$BIN"
set -- $cline     # Restore command line
#
#------------------------------------------------------------------------
function stability()
{
  local stable=$1; shift
  local name=$1; shift
  local cnt=0
  local list="$@"
  while [ $# -gt 0 ]; do
    [ $stable != 1 ] && [ "$1" = "$name" ] && echo "$1" && return
    [ $stable = 1 ] && [ "$1" != "$name" ] && echo "$1" && ((cnt++))
    shift
  done
  [ $stable = 0 ] && echo "$list"
}
#--------------------------------------------------------------
function latest()
{
  local list="$@" local versions= cnt=0 local item= local min=0 maj=0
  for item in $list; do
    case "$item" in
      *-[0-9]*.*[0-9]) versions="$versions $item"; ((cnt++)) ;;
      *) ;;
    esac
  done
  [ $cnt = 1 ] && echo $versions && return
  [ $cnt = 0 ] && echo $1 && return
  local latest=
  for item in $versions; do
    RIFS="@IFS"; IFS="-."; set -- $item; IFS="$RIFS"
    while [ $# -gt 2 ]; do shift; done
    [ "$1" -gt "$maj" ] && maj="$1" && latest="$item" && continue
    [ "$1" = "$maj" ] && [ "$2" -gt "$min" ] && min="$2" && latest="$item"
  done
  echo $latest
}
#--------------------------------------------------------------
function find_util()
{
  local stable=$1 util=$2 udir=
  cd $ADV
  for d in $util*; do udir="$udir $d"; done
  udir=$(stability $stable $util $udir)
  local got=$(latest $udir)
  [ -n "$got" ] && echo "$ADV/$got"
}
#--------------------------------------------------------------
function find_game()
{
  local dirs=". $ADVDIR $ADV $(dirname $ADV)" stable=$1 name=$2 is_file=0 
  local bare= item= gfil= gdir= fcnt= dcnt= got= d=
  case "$name" in
    */*) [ -f $name ] && [ -r $name ] && echo $name && return ;;
    *) ;;
  esac
  if [ -z "$name" ]; then
    name=$(basename $(pwd))
    case "$name" in
      *-[0-9]*.*[0-9]) name=${name%-*} ;;
      *) ;;
    esac
    bare="$name"
  else
    bare=${name%.acd}
    [ "$bare" != "$name" ] && is_file=1
  fi
  cwd=$(pwd)
  for d in $dirs; do
    [ "$d" = '.' ] && d=$cwd
    [ "$d" = '..' ] && d=$(dirname $cwd)
    cd $d
    for item in *; do
      case "$item" in
        $bare.acd) gfil="$gfil $item" ;;
        $bare-*.acd) gfil="$gfil $item" ;;
        $bare) [ "$is_file" = 0 ] && [ -d "$item" ] && \
          gdir="$gdir $item" ;;
        $bare-*) [ "$is_file" = 0 ] && [ -d "$item" ] && gdir="$gdir $item" ;;
        *) ;;
      esac
    done
    gfil=$(stability $stable $bare.acd $gfil)
    gdir=$(stability $stable $bare $gdir)
    set -- $gfil; fcnt=$#; 
    set -- $gdir; dcnt=$#; 
    if [ $fcnt != 0 ]; then 
      got="$(latest $gfil)"
    elif [ $dcnt != 0 ]; then
      got="$(latest $gdir)"
    fi
    if [ -n "$got" ]; then
      if [ -d "$d/$got" ]; then
        barest=${bare%-*}
        file=
        for f in "$d/$got"/*; do
          case "$f" in
            */$what) file="$what" ;;
            */$name) file="$name" ;;
            */$name.acd) file="$name.acd" ;;
            */$barest) file="$barest" ;;
            */$barest.acd) file="$barest.acd" ;;
            */main.acd) [ -z "$file" ] && file=main.acd ;;
            */game.acd) [ -z "$file" ] && file=game.acd ;;
            *) ;;
          esac
        done
        [ -n "$file" ] && echo "$d/$got/$file" && return
      else
        [ -n "$got" ] && echo "$d/$got" && return
      fi
    fi
  done
  cd $cwd
  for f in main game; do
    [ -f $f.acd ] && echo $f.acd && return
  done
}
#--------------------------------------------------------------
function find_it()
{
  local stable=$1 what=$2 game= d= file=
  case "$what" in
    acdc|kernel) echo $(find_util $stable $what); return ;;
    acdc*|kernel*) echo $(find_util 0 $what); return ;;
    *-[0-9]*.*[0-9]) game=$(find_game 0 $what) ;;
    *) game=$(find_game $stable $what) ;;
  esac
  echo $game && return
}
#------------------------------------------------------------------------
#
function findlibs()
{
  libarch=
  case "$1" in
    *64*) libarch=64; shift ;;
    *32*) libarch=32; shift ;;
    *) ;;
  esac
  if [ -z "$libarch" ]; then
    case "$(uname -m)" in
      *64*) libarch=64 ;;
      *)    libarch=32 ;;
    esac
  fi
  libs=
  mislib=
  archdir=
  if [ $libarch = 32 ]; then
    [ -d /usr/lib32 ] && archdir=/usr/lib32 || archdir=/usr/lib
  fi
  if [ $libarch = 64 ]; then
    [ -d /usr/lib64 ] && archdir=/usr/lib64 || archdir=/usr/lib
  fi
  for lib in $@; do
    case "$(ldconfig -vn $archdir 2>/dev/null| grep $lib)" in
      *lib$lib.so.*) libs="$libs -l$lib" ;;
      *) mislib="$mislib $lib" ;;
    esac
  done
#  libarch=
#  case "$1" in
#    *64*) libarch=64; shift ;;
#    *32*) libarch=32; shift ;;
#    *) ;;
#  esac
#  if [ -z "$libarch" ]; then
#    case "$(uname -m)" in
#      *64*) libarch=64 ;;
#      *)    libarch=32 ;;
#    esac
#  fi
#  [ "$libarch" = 32 ] && [ ! -d /usr/lib32 ] && libarch=
#  libs=
#  for lib in $@; do
#    libfile=
##    for dir in $ADV /usr /usr/local /opt/local; do
#    for dir in /usr /usr/local /opt/local; do
#      [ -r "$dir/lib$libarch/lib$lib.a" ] && \
#        libfile="$dir/lib$libarch/lib$lib.a" && break
#      for libfile in $dir/lib$libarch/lib$lib.so.*; do
#        [ -r "$libfile" ] && break || libfile=
#      done
#      [ -z "$libfile" ] || break
#    done
#    [ -z "$libfile" ] && mislib="$mislib $lib" || libs="$libs $libfile "
#  done
  eval "libs='$libs'"
  eval "mislib='$mislib'"
}
#--------------------------------------------------------------
function version()
{
  local RIFS="$IFS"
  IFS='"'
  set -- $1
  IFS="$RIFS"
  echo $2
}
#--------------------------------------------------------------
function kversion()
{
  local kver=$(grep 'define KERNEL_VERSION' $1/adv00.c)
  echo $(version "$kver")
}
#--------------------------------------------------------------
function aversion()
{
  local aver=$(grep 'define ACDC_VERSION' $1/acdc.c)
  echo $(version "$aver")
}
#--------------------------------------------------------------
function gversion()
{
  set -- $(grep -i '^Version' "$1")
  [ -n "$2" ] && echo $2 || echo UNKNOWN
}
#--------------------------------------------------------------
function gdate()
{
  set -- $(grep -i '^Date' "$1")
  [ -n "$2" ] && echo $2 $3 $4 || echo UNKNOWN
}
#--------------------------------------------------------------
function libtest()
{
  stable=0
  name="$1"
  case "$name" in
    -s*) stable=1; name="$2" ;;
    -u*) stable=-1; name="$2" ;;
    *) ;;
  esac
  echo $(find_it $stable 'acdc')
  echo $(find_it $stable 'kernel')
  echo $(find_it $stable "$name")
}
#--------------------------------------------------------------
function comline()
{
  local marg="$1"   # List of short keys taking a mandatory argument
  shift
  local kwrd key
  while [ $# != 0 ]; do           # Loop through comline tokens
    case "$1" in
      --*) echo ${1/=/ }' ' ;;    # A long keyword - replace '=' with ' '
      -*) kwrd=${1:1}             # A short keyword - strip off the '-'
          while [ -n "$kwrd" ]; do    # While some chars left...
            key=${kwrd:0:1}       # Exatrct keyword char}
            kwrd=${kwrd:1}        # Remainder of the token
            echo "-$key "         # Spit out the short keyword
            if [ -n "$marg" ] && [[ $key =~ [$marg] ]]; then # Has an argument?
              echo $kwrd          # Spit out the rest as the argument
              break;              # Done with this tokem
            fi
          done ;;                 # Done with this group of short keywords
      *) echo -n "$1 " ;;         # Just an argument on its own - spit it out
    esac
    shift                         # Done with this token
  done
}
#
#################################################################
