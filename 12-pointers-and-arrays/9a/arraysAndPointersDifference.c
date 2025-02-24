#include <stdio.h>

int strlength(char str[]) {
  //Doesn't work, because all arrays are transfered as pointers
  return sizeof(str) - 1; //int * p = str; return sizeof(p) - 1;
}

int strlength2(char * str) {
  char *p = str;
  while(*p != '\0') p++;
  return p - str;
}

int main(void) {

  char name[] = "Ivan";
  printf("%s\n", name);
  printf("%c\n", name[1]);
  name[1] = 't';
  printf("%s\n", name);

  char * str = "Niki";
  printf("%s\n", str);
  printf("%c\n", str[1]);
  //Not allowed - segmentation fault
  //str[3] = 'a';

  //The good practice is to use pointers to a constant
  const char * str2 = "Ivan";
  //Compiler forbids:
  //str2[1] = 'c';

  int size = strlength(name);
  printf("%d\n", size);

  int size2 = strlength2(name);
  printf("%d\n", size2);

  return 0;
}