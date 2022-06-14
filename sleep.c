#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int
main(int argc, char *argv[])
{
  if(argc != 2){ 
  	fprintf(stderr, "Invalid number of arguments.\n");
  	exit(-1);
  }

  int i;
  i = atoi(argv[1]);
  sleep(i);
  exit(0);
}