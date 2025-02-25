#include <stdio.h>

int main(void) {

  int arr[4] = {1, 2, 3, 4};

  //The name of the array stores the address 
  //of the array == the address of the first element 
  //in the array
  printf("The name of the array:%p\n", arr);
  printf("&arr[0]:%p\n", &arr[0]);

  int **pp = &arr;
  //Prints the address of the array
  printf("pp:%p\n", pp);
  //Offsets the pointer by 8 bytes == sizeof(int *);
  printf("pp + 1:%p\n", pp + 1);

  int (*ptr)[4] = &arr;
  //Prints the address of the array - the same as the address of the first element
  printf("ptr:%p\n", ptr);
  //This offsets the pointer by the whole size of 
  //the array (4 elements * sizeof(int) == 16 bytes)
  printf("ptr+1:%p\n", ptr + 1);

  return 0;
}