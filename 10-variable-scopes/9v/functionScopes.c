#include <stdio.h>

void foo(int a) {
  //A is already declared as a parameter => compiler error
  //int a = 10;
  a++;
}

//Not allowed, because the arr variable is local to the 
//function and after the function ends it is destroyed
int * tryInitArray() {
  int arr[5] = {1, 2, 3, 4, 5};
  return arr;
}

int main(void) {

  int a = 10;
  foo(a);
  printf("%d\n", a);

  int * arr = tryInitArray();
  for (int i = 0; i < 5; i++){
    printf("%d ", arr[i]);
  }

  return 0;
}