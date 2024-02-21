#include <stdio.h>

void printchararray(char arr[]) {
  //prints 8 bytes on 64 bit OS:
  printf("arr inside function size:%zu\n",sizeof(arr));
  //sizeof(arr)/sizeof(arr[0]) - doesn't work in functions;
  for (int i = 0; arr[i] != '\0'; i++) {
    printf("%c", arr[i]);
  }
  printf("\n");
}

void printchararray2(char * arr) {
  for (int i = 0; arr[i] != '\0'; i++) {
    printf("%c", arr[i]);
  }
  printf("\n");
}

int main(void) {
  char name[] = "Ivan";
  printf("name[0] address:%p\n", &name[0]);
  printf("name address:%p\n", name);
  //Returns the address of the array (the adress of the first elements)
  //This is different compared to obtaining address of a pointer (which returns the address in memeory of the pointer variable)
  printf("&name: %p\n", &name);
 
  //Points to a read only memory of our program
  char * p = "Ivan";
  printchararray(p);   //allowed
  
  printchararray2(name); //allowed
  printchararray2(p); //allowed

  name[0]='T';

  printf("arr size:%zu\n",sizeof(name));
  printf("p size:%zu\n",sizeof(p));

  return 0;
}