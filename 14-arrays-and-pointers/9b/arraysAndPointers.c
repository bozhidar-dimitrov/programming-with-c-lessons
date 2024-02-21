#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};
  int * p = arr;

  for (int i = 0; i < 3; i++) {
    printf("arr[%d] - %d - &a[i]:%p\n", i, arr[i], &arr[i]);
    printf("p[%d] - %d - &p[i]:%p\n", i, p[i], &p[i]);
    printf("aa - p[%d] - %d - p+i:%p\n", i, *(p+i), p + i);
    printf("aa - arr[%d] - %d - arr+i:%p\n", i, *(arr+i), arr + i);
  }
  //Address arithmetic - allows us to:
  //add numbers to pointers => p + 1
  //subtract numbers from pointers => p - 1
  //increment pointer = p++, ++p
  //decrement pointer = p--, --p

  //p++, will reassign the pointer
  //p++ => p = p + 1
  char name[] = "Ivan";
  //Iterating string using address arithmetic
  for (char * ptr = name; *ptr != '\0'; ptr++) {
    printf("%c\n", *ptr);
  }
  printf("\n");

  printf("arr:%p\n", arr);

  return 0;
}