#include <stdio.h>

void printchararray(char arr[]) {
  printf("size of array in function: %zu\n", sizeof(arr));
  int arrlen = sizeof(arr)/sizeof(arr[0]); //doesn't work with function arguments
  for (int i = 0; arr[i] != '\0'; i++) {
    printf("%c", arr[i]);
  }
  printf("\n");
}

void printchararray2(char * arr) {
  for (int i = 0; arr[i] != '\0'; i++) {
    printf("%c", arr[i]);
  }
  printf("\n");
}

int main(void) {

  char name[] = "Ivan";
  printf("size of array: %zu\n", sizeof(name));
  int arrlen = sizeof(name)/sizeof(name[0]); //works with simple arrays
  char * ptr = name;
  printf("size of pointer: %zu\n", sizeof(ptr));
  printchararray(name);
  printchararray2(name);

  char * p = "Ivan";
  printchararray(p);
  printchararray2(p);

  name[0] = 'T';

  //p[0] = 'T'; -> throws segmentation fault
  //Protect the pointer to a constant literal by making it a pointer to a constant.
  const char * p1 = "Ivan";
  //p1[0] = 'T'; throws compiler error

  return 0;
}