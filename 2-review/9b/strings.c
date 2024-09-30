#include <stdio.h>

int main(void) {

  char str[5] = {'I', 'v', 'a', 'n', '\0'};

  char str2[5] = "Ivan";

  char str3[] = "Ivan";

  for (int i = 0; str[i] != '\0'; i++) {
    printf("%c\n", str[i]);
  }

  printf("%s\n", str);

  return 0;
}