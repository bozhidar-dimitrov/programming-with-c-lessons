#include <stdio.h>


//1 1 1 1 | 1 1 1 1
//a b 0 0   c c c c
struct Test {
  char a;
  char b;;
  int c;
};

int sort(int arr[]) {
  //Doesn't work
  //int arrlen = sizeof(arr) / sizeof(arr[0]);
  
}

int main(void) {

  int a[3] = {1, 2, 3};
  printf("Size of array in bytes: %zu\n", sizeof(a));

  int arrlen = sizeof(a) / sizeof(a[0]);
  printf("Length of the array: %d\n", arrlen);

  size_t sizeOfStruct = sizeof(struct Test);
  printf("Size of struct: %zu\n", sizeOfStruct);

  return 0;
}