#include <stdio.h>

//NULL pointers
int main(void) {

  //Pointers of all types can be set to NULL
  int * p = NULL;
  double *p1 = NULL;
  
  if (p != NULL) {
    printf("%d\n", *p);
  } else {
    printf("Handle the null pointer\n");
  }

  return 0;
}