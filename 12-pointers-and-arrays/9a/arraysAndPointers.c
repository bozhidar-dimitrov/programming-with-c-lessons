#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};
  printf("arr[0]: %p\n", &arr[0]);
  printf("arr[1]: %p\n", &arr[1]);
  printf("arr[2]: %p\n", &arr[2]);

  printf("\n");

  char arr1[3] = {1, 2, 3};
  printf("arr1[0]: %p\n", &arr1[0]);
  printf("arr1[1]: %p\n", &arr1[1]);
  printf("arr1[2]: %p\n", &arr1[2]);

  //The address of the array is the same as the address of the first element:
  printf("Address of array: %p\n", &arr1);

  //Prints the address of the first element again:
  printf("Printing the name of the array: %p\n", arr1);

  int *ptr = arr;

  for (int i = 0; i < 3; i++) {
    printf("arr1[%d]:%d\n", i, arr1[i]);
    printf("ptr[%d]:%d\n", i, ptr[i]);
    printf("*(ptr+%d):%d\n", i, *(ptr+i));
    printf("*(arr+%d):%d\n", i, *(arr+i));
  }

  int *ptr2 = arr;
  printf("ptr2:%p\n", ptr2);
  printf("ptr2+1:%p\n", ptr2+1); //address of ptr + 1 * sizeof(int)
  //So when we add integer to a pointer, we recieve new address 
  //equal to the original address + the integer * sizeof(type)

  //Dereferencing the new address gives the value of the element at this address
  printf("*(ptr2+1):%d\n", *(ptr2+1));

  //Assigns the pointer to the next logical address:
  ptr2++; //ptr = ptr + 1

  char name[] = "Ivan";
  char * namePtr = name;

  //Example of using address arithmetic to print each character of a string on a new line
  for (;*namePtr != '\0'; namePtr++) {
    printf("%c\n", *namePtr);
  }

  int strLen = namePtr - name;
  printf("Name size: %d\n", strLen);

  return 0;
}