#include <stdio.h>

int sum(int a, int b);

void printHello() {
  printf("Hello, World\n");
}

//Passing arguments by reference
void bubbleSort(int array[], int size) {
  for (int i = 0; i < size; i++){
    //algorithm for sorting
  }
}

int main(void) {

  int result = sum(5, 7);
  printf("%d\n", result);

  int array[5] = {2, 3, 1, 4, 5};
  bubbleSort(array, 5);
  //here the array is sorted

  return 0;
}

//Passing arguments by value
int sum(int a, int b) {
  int c = a + b;
  return c;
}