#include <stdio.h>
#pragma 

#pragma pack(push,1)
struct SomeStruct {
  char a;
  char b;
  int c;
};
#pragma pack(pop)

void sort(int arr[]) {
  //Gets the size ofa the pointer arr = 8
  size_t sizeOfArray = sizeof(arr);
  printf("Size of array in function: %zu\n", sizeOfArray);

  //Doesn't work in functions
  int arrLen = sizeof(arr)/sizeof(arr[0]);
  printf("Length of array in function: %d\n", arrLen);
}

int main(void) {

  int a[5] = {1, 2, 3, 4, 5};
  //Size of array = 3 elements * 4 bytes each = 12 bytes
  size_t sizeOfArray = sizeof(a);
  printf("Size of array: %zu\n", sizeOfArray);

  int arrLen = sizeof(a)/sizeof(a[0]);
  printf("Length of array: %d\n", arrLen);

  sort(a);

  size_t sizeOfStruct = sizeof(struct SomeStruct);
  printf("Size of struct: %zu\n", sizeOfStruct);

  return 0;
}