#include <stdio.h>

int main(void) {

  char name[] = "Ivan";

  char name2[5] = "Ivan";

  char name3[5] = {'I', 'v', 'a', 'n', '\0'};

  for (int i = 0; name[i] != '\0'; i++) {
    printf("%c\n", name[i]);
  }

  printf("%s\n", name);

  return 0;
}