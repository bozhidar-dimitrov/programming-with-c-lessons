#include <stdio.h>

int sort(int arr[]) {
  //Doesn't work
  int arrlen = sizeof(arr) / sizeof(arr[0]);
}

struct Test{
  char a;
  char b;
  int c;
};

int main(void) {

  int c[3] = {1,2,3};
  size_t arrsize = sizeof(c);
  printf("Arr size: %zu\n", arrsize);

  //length of array 
  int arrlen = sizeof(c) / sizeof(c[0]);

  size_t structsize = sizeof(struct Test);
  printf("Struct size: %zu\n", structsize);

  return 0;
}