#include <stdio.h>
#include "patient.h"
#include "fileUtil.h"
#include "linkedlist.h"

#define PATIENT_COUNT 3

int main(void) {

  Patient patients[PATIENT_COUNT] = {
    {.name = "Ivan Ivanov", .EGN = 12313133, .age = 32, .symptoms = "I have a headache"},
    {.name = "Nikol Georgieva", .EGN = 42342341, .age = 42, .symptoms = "I have a stomache"},
    {.name = "Goergi Vasilev", .EGN = 15345234, .age = 56, .symptoms = "I have a backpain"}
  };

  LinkedList list = init();
  pushBack(&list, patients[0]);
  pushBack(&list, patients[1]);
  pushBack(&list, patients[2]);

  FILE * file = fopen("patients.bin", "wb");
  assertFileOpen(file);

  for (int i = 0; i < 3; i++) {
    struct ListNode * node = getElement(&list, i);

    //This is wrong - it is wrong to write pointers (ListNode:next) directly
    //in binary files, also we can have problems with the padding
    //fwrite(node, sizeof(struct ListNode), 1, file);

    //Serialize data format
    //1 - index of the node - int
    //2 - name of the patient - string
    //3 - egn of the patient - long
    //4 - age - int
    //5 - symptoms of the patient - string

    fwrite(&i, sizeof(int), 1, file);
    Patient patient = node->value;
    fwrite(patient.name, sizeof(char), PATIENT_NAME_MAX_LENGTH, file);
    fwrite(&patient.EGN, sizeof(long), 1, file);
    fwrite(&patient.age, sizeof(int), 1, file);
    fwrite(patient.symptoms, sizeof(char), SYMPTOMS_MAX_LENGTH, file);
  }


  fclose(file);
  release(&list);
  return 0;
}