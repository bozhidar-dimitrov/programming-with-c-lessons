#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
  
  int count = strtol(argv[1], NULL, 10);
  for (int i = 0; i < count; i++) {
    printf("%s \n", argv[2]);
  }

  return 0;
}