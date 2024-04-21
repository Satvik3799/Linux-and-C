/*

After new_pid fork(); executes, fork creates two processes, one parent and one child. The parent process is the current process and child process is new created identical process with different PID. Keep in mind, that fork returns PID. That PID is stored in new_pid variable. 

The parent process continuous after fork call. and Finds the If-else block, its PID is not zero. So executes else block.
Meanwhile, the child process is running as well, and it executes if block. 
The decision of which process, child or parent, should run first is decided by the schedular of the OS.
That's why even though there is no while(1); in the code, both if and else block of the codes execute.

*/

#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
#include <unistd.h>
#include <sys/wait.h>

int main (int argc, char *argv[])
{
  pid_t new_pid;

  //Now spawn firefox
  new_pid = fork ();
  
  if (new_pid == 0) //Child process 
    {
  	execlp ("firefox", "firefox", NULL);
      //execlp replaces the current process with its own. Its own process is new instantiation of Firefox.  Unless and until it closes, the code doesnt' execute further
    }
  else
    {
      wait (NULL);
      printf("Back from first invocation of firefox\n");
      execlp ("firefox", "firefox", "https://www.amazon.in", NULL);


	/*
      new_pid = fork ();
      if (new_pid == 0) //Child process
	{			
	 execlp ("firefox", "firefox", "https://www.amazon.in" , NULL);
	}
      else
	{
	  wait (NULL);
          printf("Back from second invocation of firefox\n");
	}
	
	*/
    }
}
