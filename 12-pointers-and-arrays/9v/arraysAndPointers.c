#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};
  printf("address of arr[0]: %p\n", &arr[0]);
  printf("address of arr[1]: %p\n", &arr[1]);
  printf("address of arr[2]: %p\n", &arr[2]);

  char arr1[3] = {1, 2, 3};
  printf("address of arr1[0]: %p\n", &arr1[0]);
  printf("address of arr1[1]: %p\n", &arr1[1]);
  printf("address of arr1[2]: %p\n", &arr1[2]);

  printf("The name of the array: %p\n", arr); //Returns the address of the first element of the array

  int *p = arr;
  for (int i = 0; i < 3; i++) {
    printf("arr[%d] - address: %p - value: %d\n", i, &arr[i], arr[i]);
    printf("p[%d] - address: %p - value: %d\n", i, &p[i], p[i]);
    printf("p + %d - address: %p - value: %d\n", i, p + i, *(p + i));
    printf("arr + %d - address: %p - value: %d\n", i, arr + i, *(arr + i));
  }

  //Offset the address stored in p by 1 * sizeof(int)
  printf("p + 1 - %p\n", p + 1); //Returns the address of the next element
  char *p2 = arr1;
  printf("p2 + 1 - %p\n", p2 + 1); //Offsets by 1 byte because of char

  //Moves the p to the next element int the array, offseting by 1 * sizeof(type)
  p++; //p = p + 1;

  char str[] = "Ivan";
  for (char * cp = str; *cp != '\0'; cp++) {
    printf("%c\n", *cp);
  }

  return 0;
}