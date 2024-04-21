#include <stdio.h>
#include <unistd.h>

int main ()

{
	printf("the process ID is %d\n", (int) getpid());
	printf("parent process ID is %d\n", (int) getppid()); //Notice its get ppid
	return 0;
}	
