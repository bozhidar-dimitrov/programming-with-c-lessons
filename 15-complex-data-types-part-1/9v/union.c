#include <stdio.h>
#include <string.h>

union simple {
  int x;
  int y;
};

union complex {
  int x;
  float y;
  double z;
};

typedef union studentid {
  char egn[11];
  char personalEducationalNumber[15];
} StudentId;

typedef enum idtype {
  EGN,
  PEN,
} IdType;

typedef struct student {
  StudentId id;
  IdType idType;
} Student;

void printStudent(Student student) {
  if (student.idType == PEN) {
    printf("Identifier: %s\n", student.id.personalEducationalNumber);
  } else if (student.idType == EGN) {
    printf("Identifier: %s\n", student.id.egn);
  }
}

typedef union ip4Address {
  unsigned char array[4];
  unsigned int asNumber;
} IP4Address;

int main(void) {
  union simple test;
  test.x = 10;

  printf("test.y => %d\n", test.y);

  union complex test2;
  test2.z = 5.15;
  test2.x = 150;
  printf("test2.z => %lf\n", test2.z);

  StudentId annaId;
  strcpy(annaId.egn, "1013145513");
  Student anna;
  anna.id = annaId;
  anna.idType = EGN;

  StudentId ivanId;
  strcpy(ivanId.personalEducationalNumber, "12314123af");
  Student ivan;
  ivan.id = ivanId;
  ivan.idType = PEN;

  printStudent(ivan);
  printStudent(anna);

  IP4Address ipAddress;
  ipAddress.array[0] = 1;
  ipAddress.array[1] = 0;
  ipAddress.array[2] = 168;
  ipAddress.array[3] = 192;

  printf("As a number: %u\n", ipAddress.asNumber);

  return 0;
}