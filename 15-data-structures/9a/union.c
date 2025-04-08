#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union simple
{
  int x;
  int y;
};

union complex
{
  int x;
  float y;
  double z;
};

union studentid
{
  unsigned long id;
  char egn[11];
};

enum idtype
{
  ID,
  EGN
};

struct student
{
  union studentid identifier;
  enum idtype idType;
  char name[30];
};

void printStudents(struct student students[], int studentsCount)
{
  for (int i = 0; i < studentsCount; i++)
  {
    struct student currentStudent = students[i];
    printf("---------------------------\n");
    switch (currentStudent.idType)
    {
      case EGN:
        printf("Identifier: %s\n", currentStudent.identifier.egn);
        break;
      case ID:
        printf("Identifier: %ld\n", currentStudent.identifier.id);
        break;
      default:
        printf("Invalid case!\n");
        exit(1);
        break;
    }
    printf("Name:%s\n", currentStudent.name);
    printf("---------------------------\n");
  }
}

union ipv4address {
  unsigned char arr[4];
  unsigned int number;
};

int main(void)
{

  union simple test1;
  test1.x = 10;
  test1.y = 15;

  printf("X:%d\n", test1.x);
  printf("Y:%d\n", test1.y);

  union complex test2;
  test2.z = 123.123456;
  test2.x = 150;

  printf("Z:%lf\n", test2.z);

  union studentid annaId;
  annaId.id = 12345;

  struct student anna;
  anna.identifier = annaId;
  anna.idType = ID;
  strcpy(anna.name, "Anna");

  union studentid marinId;
  strcpy(marinId.egn, "1232451094");

  struct student marin;
  marin.identifier = marinId;
  marin.idType = EGN;
  strcpy(marin.name, "Marin");

  struct student students[] = {anna, marin};
  printStudents(students, sizeof(students) / sizeof(students[0]));

  union ipv4address ip1;
  ip1.arr[0] = 192;
  ip1.arr[1] = 168;
  ip1.arr[2] = 0;
  ip1.arr[3] = 1;

  union ipv4address ip2;
  ip2.arr[0] = 192;
  ip2.arr[1] = 168;
  ip2.arr[2] = 0;
  ip2.arr[3] = 1;

  if (ip1.number == ip2.number) {
    printf("The two ip addresses are equal\n");
  }

  return 0;
}