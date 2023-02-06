#include <stdio.h>

int main(void) {
  int arr[5] = {1, 5, 6, 8, 10};

  printf("sizeof(int)=%zu\n", sizeof(int));

  for (int i = 0; i < 5; i++) {
    printf("arr[%d]= %p -> %d\n", i, &arr[i], arr[i]);
  }

  printf("arr=%p\n", arr);

  int *p = arr;
  //p + 1 if p == 10 => p + 1 = 14 because sizeof(int) == 4
  //p - 2 if p == 20 => p - 2 = 12 because sizeof(int) == 4
  for (int i = 0; i < 5; i++) {
    printf("p[%d]= %p -> %d\n", i, &p[i], p[i]);
    printf("p+%d = %p -> %d\n", i, p + i, *(p + i));
  }

  //p++, p-- => will change address that p holds to new value, equivalent to p = p + 1, p = p - 1
  char name[] = "Ivan";
  for (char * k = name; *k != '\0'; k++) {
    printf("%c", *k);
  }
  printf("\n");

  return 0;
}