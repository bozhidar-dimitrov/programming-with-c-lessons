#include <stdio.h>
#include <string.h>

typedef struct student {
  char firstname[50];
  char secondname[50];
  char surname[50];
  unsigned int age;
  unsigned int numberInClass;
  float averageGrade;
} Student;

Student newStudent(char firstname[50], char secondname[50], char surname[50], unsigned int numberInClass, unsigned int age, float averageGrade
) {
  Student newlyCreatedStudent;
  
  strcpy(newlyCreatedStudent.firstname, firstname);
  strcpy(newlyCreatedStudent.secondname, secondname);
  strcpy(newlyCreatedStudent.surname, surname);

  newlyCreatedStudent.numberInClass = numberInClass;
  newlyCreatedStudent.age = age;
  newlyCreatedStudent.averageGrade = averageGrade;

  return newlyCreatedStudent;
}

struct student promptStudent() {
  printf("Firstname:");
  char firstname[50];
  scanf("%s", firstname);

  printf("SecondName:");
  char secondname[50];
  scanf("%s", secondname);

  printf("Surname:");
  char surname[50];
  scanf("%s", surname);

  printf("Age:");
  unsigned int age;
  scanf("%u", &age);

  printf("NumberInClass:");
  unsigned int numberInClass;
  scanf("%u", &numberInClass);

  printf("AverageGrade:");
  float averageGrade;
  scanf("%f", &averageGrade);

  Student newlyCreatedStudent = newStudent(firstname, secondname, surname, numberInClass, age, averageGrade);

  return newlyCreatedStudent;
}

void printStudent(Student studentToBePrinted) {
  printf("-------------------------\n");
  printf("Firstaname:%s\n", studentToBePrinted.firstname);
  printf("Secondname:%s\n", studentToBePrinted.secondname);
  printf("Surname:%s\n", studentToBePrinted.surname);
  printf("Age:%u\n", studentToBePrinted.age);
  printf("Number in class:%u\n", studentToBePrinted.numberInClass);
  printf("Average grade:%f\n", studentToBePrinted.averageGrade);
  printf("-------------------------\n");
}

int main(void) {

  struct student ivan;
  ivan.numberInClass = 5;

  struct student anna;
  anna.numberInClass = 15;

  //Common mistake: 
  //student.numberInClass 

  Student ourNewStudent = promptStudent();
  printStudent(ourNewStudent);

  //Array of 30 students:
  Student students[30];

  return 0;
}