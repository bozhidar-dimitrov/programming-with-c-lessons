#include <stdio.h>

//DRY principle - don't repeat yourself

void printArrayCommas(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d, ", arr[i]);
  }
  printf("\n");
}

void printArrayBrackets(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    printf("[%d] ", arr[i]);
  }
  printf("\n");
}

void printArray(int arr[], int size, void (*callback)(int)) {
  for (int i = 0; i < size; i++) {
    callback(arr[i]);
  }
  printf("\n");
}

void printCommas(int element) {
  printf("%d, ", element);
}

void printBrackets(int element) {
  printf("[%d] ", element);
}

void printAnguler(int element) {
  printf("<%d> ", element);
}

void printDash(int element) {
  printf("%d-", element);
}

int main(void) {

  int arr[5] = {1, 2, 3, 4, 5};
  printArrayCommas(arr, 5);
  printArrayBrackets(arr, 5);

  printf("\n");

  printArray(arr, 5, printCommas);
  printArray(arr, 5, printBrackets);
  printArray(arr, 5, printAnguler);
  printArray(arr, 5, printDash);

  return 0;
}