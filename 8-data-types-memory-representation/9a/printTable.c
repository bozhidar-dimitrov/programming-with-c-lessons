#include <stdio.h>

int main(void) {

  printf("%-10s %-10s %-10s %-10s\n", "Name", "Bel", "Math", "History");
  printf("%-10s %-10.2f %-10.2f %-10.2f\n", "Martin", 5.5, 6.0, 4.3);
  printf("%-10s %-10.2f %-10.2f %-10.2f\n", "Anna", 5.0, 4.75, 3.50);
  printf("%-10s %-10.2f %-10.2f %-10.2f\n", "Georgi", 3.75, 5.25, 4.00);

  printf("%*s\n", 10, "Ivan");

  return 0;
}