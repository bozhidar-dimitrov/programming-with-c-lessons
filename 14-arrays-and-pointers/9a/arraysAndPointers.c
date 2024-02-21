#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};
  int * p = arr;

  for (int i = 0; i < 3; i++) {
    printf("arr[%d] - %d - &:%p\n", i, arr[i], &arr[i]);
    printf("p[%d] - %d - &:%p\n", i, p[i], &p[i]);
    printf("p + %d, *(p+i)%d - (p+i):%p\n", i, *(p + i), p + i);
    printf("arr + %d, *(arr+i)%d - (arr+i):%p\n", i, *(arr + i), arr + i);
  }

  printf("arr:%p\n", arr);
  //address aritmetic - adding a number to the pointer, removing number from the pointer
  //++,--
  char name[] = "Ivan";
  for (char * p = name; *p != '\0'; p++) {
    printf("%c\n",*p);
  }

  return 0;
}