#include <stdio.h>
#include "patient.h"
#include "fileUtil.h"
#include "linkedlist.h"

#define PATIENT_COUNT 3

int main(void) {

  Patient patients[PATIENT_COUNT] = {
    {.name = "Vasil Dimitrov", .EGN = 1233445566, .age=41, .symptoms = "I have a headache"},
    {.name = "Dimitar Georgiev", .EGN = 554433221167, .age=62, .symptoms = "I have a stomachache"},
    {.name = "Violeta Aleksandrova", .EGN = 1233445566, .age=55, .symptoms = "I have a backpain"},
  };

  LinkedList list = init();
  pushBack(&list, patients[0]);
  pushBack(&list, patients[1]);
  pushBack(&list, patients[2]);

  FILE * file = fopen("patients.csv", "w");
  assertFileOpen(file);

  for (int i = 0; i < list.size; i++){
    ListNode * currentNode = getElement(&list, i);
    Patient patient = currentNode->value;

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