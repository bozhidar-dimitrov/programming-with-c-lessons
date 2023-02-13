#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float *p = (float *) malloc (sizeof(float));
  *p = 10;
  printf("%d\n", *p);
  
  free(p);

  return 0;
}