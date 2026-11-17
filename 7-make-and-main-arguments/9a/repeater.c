#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv) {

  if (argc != 3) {
    printf("Invalid number of arguments!\n");
    return 1;
  }

  int repeatsCount = atoi(argv[1]);

  for (int i = 0; i < repeatsCount; i++) {
    printf("%s\n", argv[2]);
  }

  return 0;
}