#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int a = 10;		/* global initialized variable in data segment */
int b;			/* global uninitialized variable in BSS segment */
int
main (int argc, char *argv[])
{
  int c;		/* local variable c in Stack segment or in reg */
  pid_t retval;

  b = 20;
  c = 30;
  retval = fork ();
  if (retval == 0)
    {
      printf ("\nfork returned %d. So this is the child process.\n", retval);
      printf ("Original Variables: a = %d, b = %d, c = %d.\n", a, b, c);
      a = 15;
      b = 25;
      c = 35;
      printf ("Changed variables to %d, %d and  %d.\n", a, b, c);
      return (0);
    }
  else
    {
      printf ("\nfork returned %d. So this is the parent process.\n", retval);
      printf ("Original Variables: a = %d, b = %d, c =%d.\n", a, b, c);
      a = 100;
      b = 200;
      c = 300;
      printf ("Changed variables to %d, %d and  %d.\n", a, b, c);
      return (0);
    }
}
