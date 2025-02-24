#include <stdio.h>

void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void printArray2(int * arr, int size) {
  for (int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main(void) {

  int arr[3] = {1, 2, 3};
  printf("arr[0] - %p\n", &arr[0]);
  printf("arr[1] - %p\n", &arr[1]);
  printf("arr[2] - %p\n", &arr[2]);

  char arr1[3] = {1, 2, 3};
  printf("arr1[0] - %p\n", &arr1[0]);
  printf("arr1[1] - %p\n", &arr1[1]);
  printf("arr1[2] - %p\n", &arr1[2]);

  //Prints the address of the first element:
  printf("arr - %p\n", arr);

  printArray2(arr, 3);

  int *p = arr;
  for (int i = 0; i < 3; i++) {
    printf("arr[%d] - Address: %p, Value: %d\n", i, &arr[i], arr[i]);
    printf("p[%d] - Address: %p, Value: %d\n", i, &p[i], p[i]);
    printf("p + %d - Address: %p, Value: %d\n", i, p + i, *(p + i));
    printf("arr + %d - Address: %p, Value: %d\n", i, arr + i, *(arr + i));
  }

  int * p2 = p + 1; //p2 = address stored in p + (1 * sizeof(int) addresses)
  p++; //p = p + 1;

  char str[] = "Ivan";
  for (int i = 0; str[i] != '\0'; i++) {
    printf("%c\n", str[i]);
  }

  for (char * p = str; *p != '\0'; p++) {
    printf("%c\n", *p);
  }

  return 0;
}