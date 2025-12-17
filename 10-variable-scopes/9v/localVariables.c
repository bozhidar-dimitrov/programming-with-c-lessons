#include <stdio.h>

#define SWAP(A, B) \
  do { int temp = (A); \
  (A) = (B); \
  (B) = temp; } while(0)

int main(void) {

  int a = 5;
  int b = 12;
  {
    printf("B-B:%d\n", b);
    int a = 15;
    printf("A-A:%d\n", a);
    {
      int c = 15;
    }
  }
  printf("A:%d\n", a);

  {
    int x = 10;
  }

  {
    int x = 15;
  }

  //The variable c is not visible here:
  //printf("C-C:%d\n", c);

  int a1 = 15;
  int b1 = 20;
  SWAP(a1, b1);
  printf("A=%d, B=%d\n", a1, b1);
  SWAP(a1, b1);
  printf("A=%d, B=%d\n", a1, b1);

  if (a > 5)
    SWAP(a1, b1);
  else
    printf("No swap\n");

  if (a1 > b1) {
    int temp = 5;
  } else {
    printf("Temp is not visible \n");
  }

  for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
  }
  //Here i is not visible

  //We can create new for loop here using the same variable
  for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
  }

  return 0;
}