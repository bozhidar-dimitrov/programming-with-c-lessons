#include <stdio.h>
#include "patient.h"
#include "fileUtil.h"
#include "linkedlist.h"

#define PATIENT_COUNT 3

int main(void)
{

  Patient patients[PATIENT_COUNT] = {
      {.name = "Vasil Dimitrov", .age = 42, .EGN = 1241121345, .symptoms = "I have a headache"},
      {.name = "Dimitar Gerogiev", .age = 51, .EGN = 2341145312, .symptoms = "I have a stomachache"},
      {.name = "Anna Todorova", .age = 52, .EGN = 1234231254, .symptoms = "I have a backpain"}};

  LinkedList list = init();
  pushBack(&list, patients[0]);
  pushBack(&list, patients[1]);
  pushBack(&list, patients[2]);

  FILE *file = fopen("patients.csv", "w");
  assertFileOpen(file);

  for (int i = 0; i < list.size; i++)
  {
    Patient patient = getElement(&list, i)->value;

    fprintf(
      file,
      "%s,%ld,%d,%s\n",
      patient.name,
      patient.EGN,
      patient.age,
      patient.symptoms
    );
  }

  fclose(file);
  release(&list);

  return 0;
}