#include <stdio.h>
#include <string.h>

int main(void) {

  char name[6] = {'K', 'o', 's', 'i', 'o', '\0'};
  for (int i = 0; name[i] != '\0'; i++) {
    printf("%c", name[i]);
  }
  printf("\n");

  char name1[] = "Aleksander";
  printf("%s\n", name1);

  char name2[100];
  strcpy(name2, "Nikolai");
  printf("%s\n", name2);

  return 0;
}