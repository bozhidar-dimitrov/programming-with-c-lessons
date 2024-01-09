#include <stdio.h>
#include <string.h>

int main(void) {
  printf("%-4d %-10s %-10s %-10s\n", 1, "Anna", "Nikolova", "Ivanova");
  printf("%-4d %-10s %-10s %-10s\n", 124, "Dimitar", "Georgiev", "Lazarov");
  printf("%-4d %-10s %-10s %-10s\n", 345, "Kiril", "Valentinov", "Markov");

  int total = 15;
  printf("%*s %*s\n", total, "Venci", 20, "Ivanov");

  double x = 6.1234567;
  printf("X: %.10lf\n", x);

  return 0;
}