#include <stdio.h>
#include "patient.h"
#include "fileUtil.h"
#include "linkedlist.h"

int main(void) {

  Patient patients[3] = {
    {.name = "Ivan Ivanov", .age = 53, .EGN = 7123114421, .symptoms="I have a headache"},
    {.name = "Nikolai Marinov", .age = 25, .EGN = 9912042311, .symptoms = "I have a stomacheache"},
    {.name = "Petar Aleksandrov", .age = 24, .EGN = 1123114421, .symptoms="I have smart students"},
  };

  LinkedList list = init();
  pushBack(&list, patients[0]);
  pushBack(&list, patients[1]);
  pushBack(&list, patients[2]);


  FILE * file = fopen("patients.bin", "wb");
  assertFileOpen(file);

  for (int i = 0; i < 3; i++) {
    struct ListNode * node = getElement(&list, i);

    //This is not a good practise - the address of the next variable
    //may differ from execution to another, there can be padding added by the compilator;
    //fwrite(node, sizeof(struct ListNode), 1, file);

    //We need to serialize the node
    /* For 1 node:
      1 - int - the index of the node
      2 - string with particular size - the name of the patient
      3 - long - the EGN of the patient
      4 - int - the age of the patient
      5 - string with particular size - the symptoms of the patient
    */
    fwrite(&i, sizeof(int), 1, file);

    Patient patient = node->value;
    fwrite(patient.name, sizeof(char), PATIENT_NAME_MAX_LENGTH, file);
    fwrite(patient.EGN, sizeof(long), 1, file);
    fwrite(patient.age, sizeof(int), 1, file);
    fwrite(patient.symptoms, sizeof(char), SYMPTOMS_MAX_LENGTH, file);
  }

  fclose(file);
  release(&list);
  return 0;
}