#include <stdio.h>
#include <string.h>

union simple {
  int x;
  int y;
};

union Complex {
  int x;
  float y;
  double z;
};

union StudentID {
  char egn[11];
  char personalEducationalNumber[51];
};

enum IdType {
  EGN,
  PEN,
};

struct Student {
  enum IdType idType;
  union StudentID id;
};

union IPAddress {
  unsigned int number;
  unsigned char arr[4];
};

int main(void) {

  union simple test;
  test.x = 10;
  test.y = 15;

  printf("%d \n", test.x);
  printf("%d \n", test.y);

  union StudentID marinId;
  strcpy(marinId.egn, "1013145014" );
  struct Student marin;
  marin.idType = EGN;
  marin.id = marinId;

  union StudentID annaId;
  strcpy(annaId.personalEducationalNumber, "123123213");
  struct Student anna;
  anna.idType = PEN;
  anna.id = annaId;

  union IPAddress ipAddress;
  ipAddress.arr[0] = 150;
  ipAddress.arr[1] = 255;
  ipAddress.arr[2] = 255;
  ipAddress.arr[3] = 1;

  printf("Number:%d", ipAddress.number);

  return 0;
}