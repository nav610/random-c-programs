#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int 
main()
{ 
  int p1[2], p2[2]; 
  char inbuf[1];
  pid_t pid;

  if(pipe(p1) < 0){ 
  	exit(1);
  }
  if(pipe(p2) < 0){ 
  	exit(1);
  }

  pid = fork(); 

  if(pid == 0){ 
	write(p1[1], "1", 1);
	wait(NULL);
	read(p2[0], inbuf, 1);
	printf(" %d: received pong\n", pid);
  }
  else{ 
	read(p1[0], inbuf, 1);
	printf(" %d: received ping\n", pid);
	write(p2[1], "1", 1);
	}

  exit(0);
}
