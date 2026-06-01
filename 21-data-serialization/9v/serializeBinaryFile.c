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

  FILE * file = fopen("patients.bin", "wb");
  assertFileOpen(file);

  for (int i = 0; i < list.size; i++){
    ListNode * currentNode = getElement(&list, i);
    //This is wrong - writing pointers in binary is bad idea,
    //The address can be different when the program is started again
    //Also we can have problems with the padding of the structure
    //fwrite(&currentNode, sizeof(ListNode), 1, file);

    /**
     * 1 - index of the patient - int
     * 2 - name of the patient - char * - length 100
     * 3 - EGN - long
     * 4 - age - int
     * 5 - symptoms - char * - length 255
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