#include <stdio.h>

//DRY principal - Don't repeat yourself!

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d, ", arr[i]);
  }
  printf("\n");
}

void printArray2(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("[%d]", arr[i]);
  }
  printf("\n");
}


void printArraySmart(int arr[], int n, void (*callback)(int)) {
  for (int i = 0; i < n; i++) {
    callback(arr[i]);
  }
  printf("\n");
}

void printNormal(int a) {
  printf("%d, ", a);
}

void printSquare(int a) {
  printf("[%d]", a);
}

void printAnguler(int a) {
  printf("<%d>", a);
}

int main(void) {

  int arr[5] = {1, 2, 3, 4, 5};
  printArray(arr, 5);
  printArray2(arr, 5);

  printArraySmart(arr, 5, printNormal);
  printArraySmart(arr, 5, printSquare);
  printArraySmart(arr, 5, printAnguler);

  return 0;
}