#include <stdio.h>
#include <stdlib.h>
int main (int argc, char* argv[])
{
int i;
i = argc;
printf("Function called as: %s ", argv[0]);
printf("with %d arguments\n", argc-1);
for (i = 1; i <argc; i++)
    printf("Argument %d is %s\n", i, argv[i]);
exit(0);
}