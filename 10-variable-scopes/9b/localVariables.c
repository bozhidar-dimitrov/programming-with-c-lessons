#include <stdio.h>

#define SWAP(A, B) \
  do {\ 
    int temp = (A); \
    (A) = (B); \
    (B) = temp; \
  } while(0)

int main(void) {

  
  int a = 10;
  int b = 10;
  {
    int a = 6;
    printf("A-A: %d\n", a);
    printf("B-B: %d\n", b);
    {
      int c = 10;
      printf("%d \n", c);
    }
  }

  printf("%d\n", a);

  {
    int x = 10;
  }

  {
    int x = 15;
  }

  int a1 = 5;
  int b1 = 10;

  SWAP(a1, b1);
  printf("A=%d, B=%d\n", a1, b1);
  SWAP(a1, b1);
  printf("A=%d, B=%d\n", a1, b1);

  if (a > 3) 
    SWAP(a1, b1);
  else 
    printf("No swap\n");

  if (a > 5) {
    int temp = 10;
  } else {
    printf("Here temp is not visible\n");
  }

  for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
  }

  //Here c is not visible
  //printf("%d \n", c);
  return 0;
}