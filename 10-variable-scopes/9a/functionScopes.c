#include <stdio.h>

int foo() {
  //This variable is visible only in the scope of the function
  int a = 5;
}

#define SWAP(A, B) \
  int temp = A; \
  A = B; \
  B = temp; 

#define SWAP_SAFE(A, B) { \
  int temp = A; \
  A = B; \
  B = temp; } \

#define SWAP_SAFE_CORRECT(A, B) do { \
  int temp = A; \
  A = B; \
  B = temp; }while(0) \

int bar(int a) {
  a++;
}

int * initArray() {
  int arr[5] = {1, 2, 3, 4, 5};
  //Returning address of local variable is not allowed:
  return arr;
}

int main(void) {

  foo();
  //The variable "a" is not visible 
  //printf("A:%d\n", a);
  
  int x = 5;
  int y = 10;

  // SWAP(x, y);
  // SWAP(x, y); //Redefinition of temp

  SWAP_SAFE(x, y);
  SWAP_SAFE(x, y); //This works

  //This doesn't work because {}";" are two operations "<empty>;" is no-op instruction (empty instruction)
  //if (x > y) SWAP_SAFE(x,y); else printf("Other case"); 

  //do{}while(); - is onme operations, so the below works:
  if (x > y) SWAP_SAFE_CORRECT(x,y); else printf("Other case\n");
  
  int a = 10;
  bar(a);
  printf("A:%d\n", a); //a has value 10
  
  int * arr = initArray();
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]); //Error - segmentation fault (if we are lucky)
  }
  printf("\n");

  return 0;
}