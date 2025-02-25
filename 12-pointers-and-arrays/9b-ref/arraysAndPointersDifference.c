#include <stdio.h>


int arrlength(char str[]) {
  //Doesn't work - because array parameters are converted into 
  //pointers, so sizeof will return the size of the pointer
  //which on 64 bit architectures is usually 8 bytes
  return sizeof(str) - 1;
}

int main(void) {

  char name[] = "Ivan Kostov Dimitrov";
  printf("%s\n", name);
  printf("%c\n", name[1]);
  name[1] = 't';
  printf("%s\n", name);

  char * str = "Niki";
  printf("%s\n", str);
  printf("%c\n", str[3]);
  //Gives segmentation fault - tries to modify readonly memory
  //str[3] = 'a';
  printf("%s\n", str);

  //The good practice use constant pointers
  const char * p = "Ivan";
  //The compiler forbids:
  //p[0] = 'v';

  printf("sizeof(name) - 1:%d\n", sizeof(name) - 1);
  printf("arrlength(name): %d\n", arrlength(name));

  return 0;
}