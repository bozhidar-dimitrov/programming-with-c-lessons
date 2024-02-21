#include <stdio.h>

void printchararr(char arr[]) {
  printf("size of arr inside function: %zu\n", sizeof(arr));
  //sizeof(arr)/sizeof(arr[0]) - doesn't work in functions
  for (int i = 0; arr[i] != '\0'; i++) {
    printf("%c", arr[i]);
  }
  printf("\n");
}

void printchararr2(char * arr) {
  for (int i = 0; arr[i] != '\0'; i++) {
    printf("%c", arr[i]);
  }
  printf("\n");
}

int main(void) {

  char name[] = "Ivan";
  //char * ptr = name; //allowed

  //Pointer to a read only memory location
  const char * ptr = "Ivan";
  
  printf("size of name: %zu\n", sizeof(name));
  printf("size of ptr: %zu\n", sizeof(ptr));

  name[0] = 'T';
  printchararr(name);
  printchararr2(name);

  char * p = name;
  printchararr(p);
  printchararr2(p);

  //ptr[0] = 'T'; //disallowed

  printf("\n");

  printf("&name[0]:%p\n", &name[0]);
  printf("name:%p\n", name);
  //Takes the address of the array - which means the address of the first element
  printf("&name:%p\n", &name);
  //Different than taking the address of the array:
  printf("&p:%p\n", &p);

  return 0;
}