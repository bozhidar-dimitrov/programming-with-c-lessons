#include <stdio.h>
//argc - argument count - int
//argv - argument values - array of strings 
int main(int argc, char ** argv) {

  for (int i = 0; i < argc; i++) {
    printf("[%d]->%s\n", i, argv[i]);
  }

  return 0;
}