#include <stdio.h>

void print2dArray(char (*ptr)[3], int rowscount) {
  //Using address arithmetic to iterate over 2d array
  for (int i = 0; i < rowscount; i++){
    for (int j = 0; j < 3; j++) {
      printf("%d ", *(*(ptr + i)+j));
    }
    printf("\n");
  }
}

int main(void) {

  char arr[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
  };
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  printf("&arr[0][0]:%p\n", &arr[0][0]); //prints the address of the first element of the first subarray
  printf("arr:%p\n", arr); //the name of the 2d array contains the address of the 2d array in the memory which is the addresss of the first element of first subarray
  printf("arr + 1: %p\n", arr+1); //adding 1 to the array name offsets the initial address with 3 bytes, the size of one subarray, because the elements of the 2d array are 1d arrays
  printf("*arr: %p\n", *arr); //dereferencing the 2d array name, gives 1d array
  printf("*arr + 1: %p\n", *arr + 1); //using address aritmetic with 1d array offset the adress with 1 byte, because the sizeof char is 1 byte
  printf("*(arr + 1): %p\n", *(arr + 1)); //dereferencing the address of the second array, gives 1d array, representing the second array
  printf("*(arr + 1) + 2: %p\n", *(arr + 1)+2); //Prints the third element of the second subarray
  printf("*(*(arr + 1) + 2): %d\n", *(*(arr + 1)+2)); //Prints the value of arr[1][2] 
  
  char (*ptr)[3] = arr;
  print2dArray(arr, 2);

  return 0;
}