#include <stdio.h>

#define VALUE(X) X
#define NAME(X) #X
#define DEBUG_INT(X) printf("The value of " #X " is %d\n", X);
#define DEBUG_STRING(X) printf("The value of " #X " is %s\n", X);

int main(void) {

  //The compiler
  printf("Hello" ", World\n");

  int something = 5;
  printf("%d\n", something);
  printf("%d\n", VALUE(something));
  printf("%s\n", NAME(something));
  DEBUG_INT(something);

  char name[] = "Ivan";
  DEBUG_STRING(name);

  return 0;
}