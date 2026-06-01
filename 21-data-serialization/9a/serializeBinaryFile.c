#include <stdio.h>
#include "patient.h"
#include "fileUtil.h"
#include "linkedlist.h"

#define PATIENT_COUNT 3

int main(void) {

   Patient patients[PATIENT_COUNT] = {
      {.name = "Vasil Dimitrov", .age = 42, .EGN = 1241121345, .symptoms = "I have a headache"},
      {.name = "Dimitar Gerogiev", .age = 51, .EGN = 2341145312, .symptoms = "I have a stomachache"},
      {.name = "Anna Todorova", .age = 52, .EGN = 1234231254, .symptoms = "I have a backpain"}};

  LinkedList list = init();
  pushBack(&list, patients[0]);
  pushBack(&list, patients[1]);
  pushBack(&list, patients[2]);

  FILE *file = fopen("patients.bin", "wb");
  assertFileOpen(file);

  for (int i = 0; i < list.size; i++)
  {
    ListNode * currentNode = getElement(&list, i);

    //This is wrong: the structure contains pointers and we cannot serialize pointers directly in binary files. Also we can have problems with the structure padding;
    //fwrite(currentNode, sizeof(ListNode), 1, file);
   
    Patient patient = currentNode->value;

    fwrite(&i, sizeof(int), 1, file);
    fwrite(patient.name, sizeof(char), PATIENT_NAME_MAX_LENGTH, file);
    fwrite(&patient.EGN, sizeof(long), 1 , file);
    fwrite(&patient.age, sizeof(int), 1, file);
    fwrite(patient.symptoms, sizeof(char), SYMPTOMS_MAX_LENGTH, file);
  }

  fclose(file);
  release(&list);

  return 0;
}