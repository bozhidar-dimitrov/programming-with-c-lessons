#include <stdio.h>

//The argument "char str[]" is automatically transformed to char * str
size_t strLen(char str[]) {
  //Returns the size of the pointer:
  return sizeof(str) - 1;
}

int main(void) {

  
  char name[] = "Ivan";

  size_t nameLen = sizeof(name) - 1; //5 elements (+'\0') * 1 byte = 5 - 1 == 4 
  printf("String length:%zu\n", nameLen);

  char *ptr = name;
  size_t nameLen2 = sizeof(ptr) - 1; //sizeof(pointer) = 8 - 1 = 7
  printf("String length :%zu\n", nameLen2);

  size_t nameLen3 = strLen(name);
  printf("String length 3:%zu\n", nameLen3);

  char georgi[] = "Georgi";
  printf("%c\n", georgi[0]);
  georgi[0] = 'V';
  printf("%s\n", georgi);

  char * georgi2 = "Georgi";
  printf("%c\n", georgi2[0]);
  //Throws Segmentation fault: tries to modify read only memory
  //georgi2[0] = 'V';
  printf("%s\n", georgi2);

  //That's why to protect our code from bugs:
  const char * georgi3 = "Georgi";
  //So the compiler forbids:
  //georgi3[0] = 'V';

  return 0;
}