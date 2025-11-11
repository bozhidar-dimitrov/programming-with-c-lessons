#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {
  int repeatCount = atoi(argv[1]);
  for (int i = 0; i < repeatCount; i++){
    printf("%s\n", argv[2]);
  }
  

  return 0;
}