#include <stdio.h>

union simple {
  int x;
  int y;
};

union complex {
  int x;
  long long y;
  double z;
};

union Id{
  char EGN[10];
  char PEN[15];
};

enum IdType {
  EGN,
  PEN
};

struct Student {
  union Id id;
  enum IdType idType;
  char fullname[200];
  float averageGrade;
};

void printEGN(char egn[10]) {
  printf("%s\n", egn);
}

void printPEN(char pen[15]) {
  printf("%s\n", pen);
}

void printStudent(struct Student student){
  printf("---------------------\n");
  if (student.idType == EGN) {
    printf("EGN:");
    printEGN(student.id.EGN);
  } else if (student.idType == PEN) {
    printf("PEN:");
    printPEN(student.id.PEN);
  }
  printf("Fullname:%s\n", student.fullname);;
  printf("Average grade:%f\n", student.averageGrade);
  printf("---------------------\n");
}

//192.168.1.1
union IpAddress{
  char asArray[4];
  int asNumber;
};

int main(void) {

  union simple simpleUnion;
  simpleUnion.x = 10;
  simpleUnion.y = 20;
  
  printf("simpleUnion.x:%d\n", simpleUnion.x);
  printf("simpleUnion.y:%d\n", simpleUnion.y);

  union complex complexUnion;
  complexUnion.z = 5.5;
  complexUnion.y = 13123123123123;

  printf("complexUnion.y:%lld\n",complexUnion.y);
  printf("complexUnion.z:%lf\n", complexUnion.z);

  struct Student nikolai;
  nikolai.idType = EGN;
  strcpy(nikolai.id.EGN, "1231232");
  strcpy(nikolai.fullname, "Nikolai");
  nikolai.averageGrade = 5.5;

  struct Student anna;
  anna.idType = PEN;
  strcpy(anna.id.PEN, "123g1a232");
  strcpy(anna.fullname, "Anna");
  anna.averageGrade = 5.1;

  union IpAddress address1;
  address1.asArray[0] = 192;
  address1.asArray[1] = 168;
  address1.asArray[2] = 1;
  address1.asArray[3] = 1;

  union IpAddress address2;
  address2.asArray[0] = 192;
  address2.asArray[1] = 168;
  address2.asArray[2] = 1;
  address2.asArray[3] = 1;

  if (address1.asNumber == address2.asNumber) {
    printf("The ip addresses are equal\n");
  }

  return 0;
}