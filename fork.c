#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int 
main(){ 
  
  pid_t pid; 

  pid = fork(); 

  if(pid == 0){ 
  	printf("Parent Process with pid %d\n", pid);
  }
  else{ 
  	printf("Child Process with pid %d\n", pid);
  }

  exit(0);
}