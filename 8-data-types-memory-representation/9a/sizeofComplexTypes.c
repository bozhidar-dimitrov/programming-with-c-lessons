#include <stdio.h>

#pragma pack(push, 1)
struct someStruct {
  char a;
  char b;
  int c;
};
#pragma pack(pop)

int sortArray(int arr[]) {
  size_t arrSize = sizeof(arr);
  printf("Arr size in function: %zu\n", arrSize);

  size_t len = sizeof(arr) / sizeof(arr[0]);
  printf("Arr len in function: %zu \n", len);
}

int main(void) {

  int arr[3] = {1, 2, 3};

  size_t arrSize = sizeof(arr);
  printf("Arr size: %zu\n", arrSize);

  size_t len = sizeof(arr) / sizeof(arr[0]);
  printf("Arr len: %zu \n", len);

  sortArray(arr);

  size_t someStructSize = sizeof(struct someStruct);
  printf("Size of struct: %zu\n", someStructSize);

  return 0;
}