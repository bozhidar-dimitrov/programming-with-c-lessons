#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  FILE * file = fopen("students.txt", "r");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }
  
  int number;
  char name[100];
  double averageGrade;

  while (fscanf(file, "%d %s %lf\n", &number, name, &averageGrade) != EOF) {
    printf("Student number: %d\n", number);
    printf("Student name: %s\n", name);
    printf("Student averageGrade: %lf\n", averageGrade);
  }

  //Alawys close the file when we don't need it
  fclose(file);

  return 0;
}