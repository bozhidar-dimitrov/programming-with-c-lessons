#include <stdio.h>
#include "patient.h"
#include "fileUtil.h"
#include "linkedlist.h"

#define PATIENT_COUNT 3

int main(void) {

  Patient patients[PATIENT_COUNT] = {
    {.name = "Vasil Dimitrov", .EGN = 1234561234, .age = 51, .symptoms = "I have a headache"},
    {.name = "Anna Georgieva", .EGN = 4321412341, .age = 43, .symptoms = "I have a stomachache"},
    {.name = "Dimitar Ivanov", .EGN = 5434231452, .age = 63, .symptoms = "I have a backpain"}
  };

  LinkedList list = init();
  pushBack(&list, patients[0]);
  pushBack(&list, patients[1]);
  pushBack(&list, patients[2]);

  FILE * file = fopen("patients.bin", "wb");
  assertFileOpen(file);
  
  for (int i = 0; i < list.size; i++){
    ListNode * currentNode = getElement(&list, i);
  
    //This is wrong we cannot write structures containing pointers in
    //files, we can also have problems with the structure padding
    //fwrite(currentNode, sizeof(ListNode), 1, file);

    /**
     * Data Schema - format
     * 1 - index of the patient - int (4 bytes)
     * 2 - name of the patient - char * - 100 bytes
     * 3 - egn of the patient - long (8 bytes)
     * 4 - age of the patient - int (4 bytes)
     * 5 - symptoms - char * - 255 bytes
     */
    Patient patient = currentNode->value;
    fwrite(&i, sizeof(int), 1, file);
    fwrite(patient.name, sizeof(char), PATIENT_NAME_MAX_LENGTH, file);
    fwrite(&patient.EGN, sizeof(long), 1, file);
    fwrite(&patient.age, sizeof(int), 1, file);
    fwrite(patient.symptoms, sizeof(char), SYMPTOMS_MAX_LENGTH, file);
  }

  fclose(file);
  release(&list);

  return 0;
}