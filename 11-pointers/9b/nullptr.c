#include <stdio.h>

int main(void) {

  int * p = NULL;
  double * p1 = NULL;
  //Usually is defined as macro with the following body: ((void *)0)
  
  //Dereferencing the NULL pointer gives runtime segmentation error
  //*p1 = 15;
  if (p != NULL) {
    printf("%d", *p);
  } else {
    printf("We have a problem \n");
  }

  return 0;
}