#include <stdio.h>

int main(void) {

  printf("%-10s|%-10s|%-10s|%-10s\n", "Name", "Bel", "Math", "History");

  printf("%-10s|%-10.2f|%-10.2f|%-10.2f\n", "Ivaylo", 5.0, 6.0, 4.0);
  printf("%-10s|%-10.2f|%-10.2f|%-10.2f\n", "Margarita", 6.0, 6.0, 5.0);

  printf("%*s\n", 30, "Anna");
  printf("%%d\n");

  return 0;
}