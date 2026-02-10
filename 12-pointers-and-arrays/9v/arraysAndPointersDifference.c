#include <stdio.h>

//The compiler automatically transform array function arguments to pointers:
size_t stringLength(char str[]) {
  //Sizeof won't work as expected here:
  return sizeof(str) - 1; //Returns the size of pointer - 1 == 7 
}

int main(void) {

  char name[] = "Ivan";
  size_t nameLen = sizeof(name) - 1;
  printf("Length of string: %zu\n", nameLen);

  char *p = name;
  size_t nameLen1 = sizeof(p) - 1;
  printf("Length of string: %zu\n", nameLen1);

  size_t nameLen2 = stringLength(name);
  printf("Length of string: %zu\n", nameLen2);

  char georgi[] = "Georgi";
  printf("%c\n", georgi[0]);
  georgi[0] = 'V';
  printf("%s\n", georgi);

  char * georgi2 = "Georgi";
  printf("%c\n", georgi2[0]);
  //Throws segmentation fault - cannot modify constant literal stored in read only memory
  //georgi2[0] = 'V';
  //("%s\n", georgi2);

  //Best pracice:
  const char * georgi3 = "Georgi";
  //Compiler forbids:
  //georgi3[0] = 'V';

  return 0;
}