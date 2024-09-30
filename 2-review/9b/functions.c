#include <stdio.h>

//Function declaration
int sum(int a, int b);

void printHello() {
  printf("Hello, World\n");
}

//Passing array by reference
void sortArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    //...
  }
}

int main(void) {

  int result = sum(5, 6);
  printf("%d\n", result);

  printHello();

  int arr[5] = {5, 3, 1, 2, 4};
  sortArray(arr, 5);
  //arr is sorted

  return 0;
}

//Function definition
//Passing arguments by value
int sum(int a, int b) {
  int c = a + b;
  return c;
}