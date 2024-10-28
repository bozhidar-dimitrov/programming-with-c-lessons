#include <stdio.h>

#define VALUE(X) X
#define NAME(X) #X
#define DEBUG_INT(X) printf("The value of " #X " is %d\n", X);

int main(void) {

  int something = 5;
  printf("%d\n", something);
  printf("%d\n", VALUE(something));
  printf("%s\n", NAME(something));

  printf("Hello" ", world\n");
  DEBUG_INT(something)

  return 0;
}