#include <stdio.h>

#define FOO(X) X
#define BAR(X) #X
#define DEBUG_INT(X) printf("The value of " #X " is %d\n", X)

int main(void) {

  int something = 5;
  printf("%d\n", something);
  printf("%d\n", FOO(something));
  printf("%s\n", BAR(something));

  //The compiler automatically concatenates strings that are near each other
  printf("Hello, " "World\n");

  //Useful debug macro
  DEBUG_INT(something);

  return 0;
}