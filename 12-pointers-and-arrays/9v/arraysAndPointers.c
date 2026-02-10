#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};
  printf("Address of arr[0]: %p\n", &arr[0]);
  printf("Address of arr[1]: %p\n", &arr[1]);
  printf("Address of arr[2]: %p\n", &arr[2]);

  char arr1[3] = {1, 2, 3};
  printf("Address of arr1[0]: %p\n", &arr1[0]);
  printf("Address of arr1[1]: %p\n", &arr1[1]);
  printf("Address of arr1[2]: %p\n", &arr1[2]);

  //The address of the array is the same as the address of the first element
  printf("Address of an array: %p\n", &arr);

  //The name of the array is a pointer that holds the address of the first element:
  printf("The name of the first element:%p\n", arr);

  int *ptr = arr;

  for (int i = 0; i < 3; i++) {
    printf("arr[%d]: %d\n", i, arr[i]);
    printf("ptr[%d]: %d\n", i, ptr[i]);
    printf("*(ptr+%d): %d\n", i, *(ptr+i));
    printf("*(arr+%d): %d\n", i, *(arr+i));
  }

  printf("Address stored in ptr:%p\n", ptr);
  //Adress arithmetic:
  printf("Address of the second element of the array:%p\n", ptr + 1); //Address of the ptr + the integer * sizoef(type)
  printf("The value of the second element of the array:%d\n", *(ptr + 1));

  //Offsets the pointer to the next element
  ptr++; //ptr = ptr + 1

  char name[] = "Teodor";
  for (int i = 0; name[i] != '\0'; i++) {
    printf("%c\n", name[i]);
  }

  char * namePtr = name;
  for (; *namePtr != '\0'; namePtr++) {
    printf("%c\n", *namePtr);
  }

  int nameLen = namePtr - name;
  printf("Length of string: %d\n", nameLen);

  return 0;
}