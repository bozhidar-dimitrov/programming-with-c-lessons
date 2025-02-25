#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};
  printf("Address of arr[0]: %p\n", &arr[0]);
  printf("Address of arr[1]: %p\n", &arr[1]);
  printf("Address of arr[2]: %p\n", &arr[2]);

  char arr1[3] = {1, 2, 3};
  printf("Address of arr1[0]: %p\n", &arr1[0]);
  printf("Address of arr1[1]: %p\n", &arr1[1]);
  printf("Address of arr1[2]: %p\n", &arr1[2]);

  printf("The name of the array: %p\n", arr); //The same as the address of arr[0];

  int * p = arr;
  for (int i = 0; i < 3; i++) {
    printf("arr[%d] - address: %p - value: %d\n", i, &arr[i], arr[i]);
    printf("p[%d] - address: %p - value: %d\n", i, &p[i], p[i]);
    printf("p + %d - address: %p - value: %d\n", i, p + i, *(p + i));
    printf("arr + %d - address: %p - value: %d\n", i, arr + i, *(arr + i));
  }

  printf("p+1: %p\n", p + 1); //offsets the address by the number * sizeof(type) == &arr[0] + 1 * 4

  p++; //p = p + 1 - modifies the address stored in p;

  char str[] = "C-programming";
  for (int i = 0; str[i] != '\0'; i++) {
    printf("%c\n", str[i]);
  }
  char * p1 = str;
  for (;*p1 != '\0'; p1++){
    printf("%c\n", *p1);
  }

  int strSize = p1 - str;
  printf("The size of the str: %d\n", strSize);

  return 0;
}