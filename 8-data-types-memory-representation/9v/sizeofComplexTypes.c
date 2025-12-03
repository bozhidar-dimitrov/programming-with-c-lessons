#include <stdio.h>

#pragma pack(push, 1)
struct someStruct {
  char a;
  char b;
  int c;
};
#pragma pack(pop)

void sort(int arr[]) {
  size_t pointerSize = sizeof(arr);
  printf("Size of pointer: %zu\n", pointerSize);

  size_t len = sizeof(arr) / sizeof(arr[0]);
  printf("Len of array in function: %zu\n", len);
}

int main(void) {

  int a[] = {1, 2, 3};
  size_t sizeOfArray = sizeof(a);

  size_t len = sizeof(a) / sizeof(a[0]);
  printf("Len of array: %zu\n", len);

  sort(a);

  size_t sizeofStruct = sizeof(struct someStruct);
  printf("Size of struct:%zu\n", sizeofStruct);

  return 0;
}