#include <stdio.h>


int main(void) {

  printf("%-10s %-10s %-10s %-10s\n", "Name", "Bel", "Math", "History");
  printf("%-10s %-10.2f %-10.2f %-10.2f\n", "Marin", 5.5, 3.75, 6.0);
  printf("%-10s %-10.2f %-10.2f %-10.2f\n", "Anna", 3.6, 6.0, 5.25);
  printf("%-10s %-10.2f %-10.2f %-10.2f\n", "Georgi", 4.35, 5.10, 5.35);

  printf("%-*s", 30, "Ivan");

  return 0;
}