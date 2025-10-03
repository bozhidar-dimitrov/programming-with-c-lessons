#include <stdio.h>
#include <string.h>

int main(void) {

  char name[] = {'G', 'e', 'o', 'r', 'g', 'i', '\0'};
  for (int i = 0; name[i] != '\0'; i++) {
    printf("%c", name[i]);
  }
  printf("\n");

  char name1[7] = "Georgi";
  char name2[] = "Georgi";
  printf("%s\n", name1);

  char name3[100];
  strcpy(name3, "Ivan");
  printf("%s\n", name3);

  char c = 'A';
  printf("%d\n", c);

  int x = 100;
  printf("%c\n", x);

  return 0;
}