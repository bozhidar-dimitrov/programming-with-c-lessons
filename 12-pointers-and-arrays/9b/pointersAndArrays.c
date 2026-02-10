#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};
  printf("Address of arr[0]:%p\n", &arr[0]);
  printf("Address of arr[1]:%p\n", &arr[1]);
  printf("Address of arr[2]:%p\n", &arr[2]);

  printf("\n");
  char arr1[3] = {1, 2, 3};
  printf("Address of arr1[0]:%p\n", &arr1[0]);
  printf("Address of arr1[1]:%p\n", &arr1[1]);
  printf("Address of arr1[2]:%p\n", &arr1[2]);

  printf("Address of array arr:%p\n", &arr);

  printf("The name of the array:%p\n", arr);

  int * p = arr;

  for (int i = 0; i < 3; i++){
    printf("arr[%d]:%d\n", i, arr[i]);
    printf("p[%d]:%d\n", i, p[i]);
    printf("*(p+%d):%d\n", i, *(p + i));
    printf("*(arr+%d):%d\n", i, *(arr + i));
  }

  printf("Address stored in p (the address of the array:):%p\n", p);
  //Address arithmetic
  printf("p+1:%p\n", p + 1); //New address = address stored in p + integer * sizoef(type)
  //Dereferencing the new address:
  printf("*(p+1):%d\n", *(p + 1)); //The value of the second element

  p++; //p = p + 1

  char name[] = "Viktor";
  for (int i = 0; name[i] !='\0'; i++) {
    printf("%c\n", name[i]);
  }
  printf("\n");

  char * namePtr = name;
  for (; *namePtr != '\0'; namePtr++) {
    printf("%c\n", *namePtr);
  }

  int nameLength = namePtr - name;
  printf("The length of the string: %d\n", nameLength);

  return 0;
}