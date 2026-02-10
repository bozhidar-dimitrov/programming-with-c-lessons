#include <stdio.h>

//DRY = don't repeat yourself principle

void printArrayComas(int arr[], int n) {
  for (int i = 0; i < n; i++){
    printf("%d, ", arr[i]);
  }
  printf("\n");
}

void printArrayBrackets(int arr[], int n) {
  for (int i = 0; i < n; i++){
    printf("[%d] ", arr[i]);
  }
  printf("\n");
}

void printArray(int arr[], int n, void (*callback)(int element)) {
  for (int i = 0; i < n; i++){
    callback(arr[i]);
  }
  printf("\n");
}

void printCommas(int element){
  printf("%d, ", element);
}

void printBrackets(int element){
  printf("[%d]", element);
}

void printAnguler(int element){
  printf("<%d>", element);
}

int main(void) {

  int arr[5] = {1, 2, 3, 4, 5};

  //Variant 1: hard to maintain
  printArrayComas(arr, 5);
  printArrayBrackets(arr, 5);
  printf("\n");

  //Variant 2: follows best practices
  printArray(arr, 5, printCommas);
  printArray(arr, 5, printBrackets);
  printArray(arr, 5, printAnguler);

  return 0;
}