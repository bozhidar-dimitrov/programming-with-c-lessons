#include <stdio.h>

int main(void) {

  printf("%-10s %-10s %-10s %-10s\n", "Name", "Bel", "Math", "History");

  printf("%-10s %-10.2f %-10.2f %-10.2f\n", "Aleksandar", 5.3, 3.5, 6.0);
  printf("%-10s %-10.2f %-10.2f %-10.2f\n", "Anna", 6.0, 4.0, 5.0);

  printf("%*s\n", 15, "Anna");

  return 0;
}