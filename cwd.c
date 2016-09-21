#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void main(void){
  printf("%s\n", getcwd(NULL,0));
  exit(EXIT_SUCCESS);
}
