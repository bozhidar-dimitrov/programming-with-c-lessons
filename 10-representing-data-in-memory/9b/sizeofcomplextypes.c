#include <stdio.h>

struct Test {
  char a;
  char b;
  int c;
};

int sort(int arr[]) {
  //Doesn't work
  //int arrlen = sizeof(arr) / sizeof(arr[0]);
}

int main(void) {

  int b[3] = {1, 2, 3};
  size_t sizeofArr = sizeof(b);
  printf("Size of arr: %zu\n", sizeofArr);

  int arrlen = sizeof(b) / sizeof(b[0]);
  printf("Length of arr: %d\n", arrlen);

  size_t structsize = sizeof(struct Test);
  printf("Struct size: %zu \n", structsize);

  return 0;
}