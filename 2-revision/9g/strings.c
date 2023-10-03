#include <stdio.h>

int main(void) {

  char name[5] = "Ivan"; //ends with \0
  char name2[5] = {'I', 'v', 'a', 'n', '\0'};

  for (int i = 0; name[i] != '\0'; i++) {
    printf("%c\n", name[i]);
  }

  printf("%s\n", name); //prints the whole string

  return 0;
}