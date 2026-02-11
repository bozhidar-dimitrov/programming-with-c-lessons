#include <stdio.h>

//In c the arrays that are passed as function arguments, automatically are transferred to pointer
size_t strLength(char arr[]) {
  //Size of doesn't work with arrays passed as function arguments - it returns the size of the pointer
  return sizeof(arr) - 1;
}

int main(void) {

  char name[] = "Petar";
  size_t nameLength = sizeof(name) - 1;
  printf("Name length: %zu\n", nameLength);

  char * ptr = name;
  size_t nameLength1 = sizeof(ptr) - 1;
  printf("Name length: %zu\n", nameLength1);

  size_t nameLength2 = strLength(name);
  printf("Name length: %zu\n", nameLength2);

  char georgi[] = "Georgi";
  printf("%c\n", georgi[0]); 
  georgi[0] = 'V';
  printf("%s\n", georgi); 

  char * georgi2 = "Georgi";
  printf("%c\n", georgi2[0]);
  //This throws runtime segmentation fault error
  //georgi2[0] = 'V';
  //printf("%s\n", georgi2); 

  //Best practice:
  const char * georgi3 = "Georgi";
  //Compiler forbids:
  //georgi3[0] = 'V';

  return 0;
}