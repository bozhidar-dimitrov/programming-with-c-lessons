#include <stdio.h>

size_t arrayLength(char str[]) {
  //All array function parameters are transfered to pointers 
  //This thing won't work - it will return the size of a pointer:
  return sizeof(str) - 1;
}

int main(void) {

  char name[] = "Ivan";
  printf("%s\n", name);
  printf("%c\n", name[1]);
  name[1] = 't';
  printf("%s\n", name);

  char * str = "Niki";
  printf("%s\n", str);
  printf("%c\n", str[1]);
  //Throws segmentation fault - error - modifying readonly memeory
  //str[3] = 'a';

  //The right way:
  const char * str1 = "Ivan";
  //The compiler forbids:
  //str1[1] = 't';

  printf("Size of str: %zu\n", arrayLength(name));

  return 0;
}