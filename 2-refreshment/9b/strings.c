#include <stdio.h>

int main(void) {

  char str[7] = {'N', 'i', 'k', 'o', 'l', 'a', '\0'};
  //First way:
  for (int i = 0; str[i] != '\0'; i++) {
    printf("%c", str[i]);
  }
  printf("\n");

  //Second way:
  printf("%s", str);

  //Easy way of defining strings
  char str1[] = "Nikola";
  printf("%s", str1);

  return 0;
}