#include <stdio.h>

int main(void) {

  printf("%-10s %-10s %-10s %-10s\n", "Name", "Bel", "Math", "History");

  printf("%-10s %-10.2f %-10.2f %-10.2f\n", "Dimitar", 6.0, 6.0, 2.0);
  printf("%-10s %-10.2f %-10.2f %-10.2f\n", "Maria", 5.0, 6.0, 5.5);

  printf("%*s\n", 20, "Anna");
  printf("%%d\n");

  return 0;
}