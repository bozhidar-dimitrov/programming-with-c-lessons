#include <stdio.h>

int main(void) {

  //On most compilers is equal to int *p = 0;
  int * p = NULL; 
  double * p2 = NULL;
  
  if (p != NULL) {
    printf("%d", *p);
  } else {
    printf("Handle the null pointer\n");
  }

  //int * p = malloc(234);
  //if (p != NULL) {
    //consume p
  //} else {
    //handle the error
  //}

  return 0;
}