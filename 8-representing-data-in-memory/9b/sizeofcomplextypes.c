#include <stdio.h>

struct SomeStruct {
  char a;
  char b;
  int c;
};

void sortArr(int arr[]) {
  //Gives the size of the array
  printf("Size of arr in function: %zu\n", sizeof(arr));

  //Doesn't work
  int arrLen = sizeof(arr) / sizeof(arr[0]);
  printf("Arr size in array: %d\n", arrLen);
}

int main(void) {

  int arr[5] = {1, 2, 3, 5, 6};

  //Have value 12 = 3 elements * 4 bytes each
  size_t arrSize = sizeof(arr);

  int arrLen = sizeof(arr) / sizeof(arr[0]);
  printf("Arr size: %d\n", arrLen);

  sortArr(arr);


  size_t sizeOfStruct = sizeof(struct SomeStruct);
  printf("Size of struct: %zu\n", sizeOfStruct);

  return 0;
}