#include <stdio.h>

int main(void) {

  int arr[5] = {1, 5, 3, 6, 7};

  printf("sizeof(int) = %zu\n", sizeof(int));

  for (int i = 0; i < 5; i++) {
    printf("arr[%d] = %p -> %d\n", i, &arr[i], arr[i]);
  }

  printf("arr=%p\n", arr);

  int * p = arr;
  //p + 1; p+2 etc -> adding integer to pointers is allowed
  //p - 1; p-3 etc -> subtracting integers from pointers is allowed
  for (int i = 0; i < 5; i++) {
    printf("p[%d] = %p -> %d\n", i, &p[i], p[i]);
    printf("p + %d = %p -> %d\n", i, p + i, *(p + i));
  }

  char name[] = "Ivan";
  //k++ => k = k + 1 or change the address of k with 1 byte
  for (char *k = name; *k != '\0'; k++) {
    printf("%c", *k);
  }
  printf("\n");

  return 0;
}