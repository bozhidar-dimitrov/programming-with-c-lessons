#include <stdio.h>

struct Student {
  int number;
  char name[30];
};

int main(void) {

  int arr[10] = {[5] = 100, [5 ... 9] = 3};

  struct Student ivan = {number:4, name:"Ivan"};

  struct Student * ptr = &ivan;
  printf("%s", ptr->name);


  return 0;
}