#include <stdio.h>
#include "strings.h"

int main(void) {

  printf("This is our program: Program\n");

  int len = stringlength("Martin");
  printf("%d\n", len);

  return 0;
}