#include <stdio.h>
#include <string.h>

void printStudent(char name[], int grade, int number, float avggrade) {
  //Implementation
}

struct Student {
  char name[30];
  int grade;
  int number;
  float avggrade;
};

typedef struct teacher {
  char name[30];
  int teachingingrade;
} Teacher;


void printStudent2(struct Student student) {
  printf("%s\n", student.name);
  printf("%d\n", student.grade);
  printf("%d\n", student.number);
  printf("%f\n", student.avggrade);
}

int main(void) {

  char name1[30] = "Ivan";
  int grade1 = 9;
  int number1 = 5;
  float avggrade = 5.5;

  printStudent(name1, grade1, number1, avggrade);

  char name2[30] = "Marin";
  int grade2 = 9;
  int number2 = 15;
  float avggrade = 5.6;

  printStudent(name2, grade2, number2, avggrade);


  struct Student student1; //normal definition
  strcpy(student1.name, "Lili");
  student1.grade = 9;
  student1.number = 25;
  student1.avggrade = 5.5;
  printStudent2(student1);

  Teacher teacher1; //defined with typedef
  

  return 0;
}