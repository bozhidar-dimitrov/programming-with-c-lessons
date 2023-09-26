#include <stdio.h>

int main(void) {

  //'\0'
  char s[5] = "Ivan";
  char s1[5] = {'I', 'v', 'a','n', '\0'};

  for (int i = 0; s[i] != '\0'; i++) {
    printf("%c\n", s[i]);
  }

  return 0;
}