#include <stdio.h>

typedef struct {
  int number;
  char name[30];
} Student;

int main(void) {

  int arr[10] = {[3]=3, [7 ... 9] = 3};

  Student student1 = {number:1, name:"Ivan"};

  return 0;
}