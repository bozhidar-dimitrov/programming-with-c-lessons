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
  printf("Pointer size: %zu\n", pointerSize);

  size_t len = sizeof(arr) / sizeof(arr[0]);
  printf("Arr len in function: %zu\n", len);
}

int main(void) {

  int arr[] = {1, 2, 3, 4};
  size_t sizeOfArray = sizeof(arr);
  printf("Arr size: %zu\n", sizeOfArray);

  size_t len = sizeof(arr) / sizeof(arr[0]);
  printf("Arr len: %zu\n", len);

  sort(arr);

  size_t sizeOfStruct = sizeof(struct someStruct);
  printf("Some struct size: %zu\n", sizeOfStruct);

  return 0;
}