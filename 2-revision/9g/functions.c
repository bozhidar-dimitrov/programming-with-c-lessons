#include <stdio.h>

int add(int a, int b) {
  int c = a + b;
  return c;
}

void greet() {
  printf("Hello!");
}

void bubblesort(int arr[], int arrlen) {
  arr[0] = 5;
}

int main(void) {
  int x = add(5, 6);
  greet();

  int array[5] = {2, 3, 4, 1, 5};
  int arrlen = 5;
  bubblesort(array, arrlen);
  //array[0] == 5;

  return 0;
}