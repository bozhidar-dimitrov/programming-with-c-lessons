#include <stdio.h>

#pragma pack(push,1)
struct SomeStruct {
  char a;
  char b;
  int c;
};
#pragma pack(pop)

//int arr[] compiler transfers to int * arr;
void sort(int arr[]) {
  size_t arrSize = sizeof(arr);
  printf("Size of the array in the sort function: %zu\n", arrSize);

  size_t arrLen = sizeof(arr)/sizeof(arr[0]);
  printf("Len of array in the sort function: %zu\n", arrLen);
}

int main(void) {

  int arr[5] = {1, 2, 3, 4, 5};

  //Size of array = 3 elements * 4 bytes each = 12 bytes
  size_t arrSize = sizeof(arr);
  printf("Size of the array: %zu\n", arrSize);

  size_t arrLen = sizeof(arr)/sizeof(arr[0]);
  printf("Len of array: %zu\n", arrLen);

  sort(arr);

  size_t sizeOfSomeStruct = sizeof(struct SomeStruct);
  printf("Some struct size: %zu\n", sizeOfSomeStruct);

  return 0;
}