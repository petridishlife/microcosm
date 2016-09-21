#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(int n, const char *gram[]){
  for(int i = 1; i < n; i++){
    printf("%s ", gram[i]);
  } printf("\n");
  exit(EXIT_SUCCESS);
}
