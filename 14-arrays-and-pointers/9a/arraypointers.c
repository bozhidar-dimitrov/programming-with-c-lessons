#include <stdio.h>

int main(void) {

  int arr[4] = {1, 2, 3, 4};

  //array pointers
  int (*p)[4] = &arr;

  printf("&arr[0] - %p\n", &arr[0]);
  printf("*p:%p\n", *p); //equivalent of printf("%p", arr);
  printf("p:%p\n", p);

  printf("p+1:%p\n", p+1);
  printf("*p+1:%p\n", *p+1);


  return 0;
}