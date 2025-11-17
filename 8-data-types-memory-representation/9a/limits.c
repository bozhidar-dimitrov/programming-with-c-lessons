#include <stdio.h>
#include <limits.h>

int main(void) {

  printf("Char min: %d\n", CHAR_MIN);

  printf("Char max: %d\n", CHAR_MAX);

  printf("unsigned char max: %d\n", UCHAR_MAX);

  printf("unsigned long long max: %llu\n", ULLONG_MAX);

  printf("short max: %hd\n", SHRT_MAX);

  char a = CHAR_MAX;
  printf("%d \n", a);
  a++;
  printf("%d \n", a);

  for (char i = 0; 1; i++){
    printf("%d ", i);
  }

  return 0;
}