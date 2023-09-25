#include <stdio.h>

int main(void) {

  char name[5] = "Ivan";
  char name2[5] = {'I', 'v', 'a', 'n', '\0'};

  for (int i = 0; name2[i] != '\0'; i++) {
    printf("\n%c", name2[i]);
  }

  while('\0') {
    
  }

  return 0;
}