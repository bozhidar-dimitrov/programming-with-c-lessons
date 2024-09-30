#include <stdio.h>

int sum(int a, int b);

void printHello() {
  printf("Hello, World\n");
}

//Passing arguments by reference
void sortArray(int arr1[], int size){
  //sorting algorithm
}

int main(void) {
 
  int x = sum(5, 6);
  printf("%d\n", x);

  printHello();

  int arr[5] = {2, 3, 1, 5, 4};
  sortArray(arr, 5);


  return 0;
}

//Passing arguments by value
int sum(int a, int b) {
  int c = a + b;
  return c;
}