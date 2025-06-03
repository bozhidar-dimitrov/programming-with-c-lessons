#include <stdio.h>
#include <stdlib.h>
#include "patient.h"
#include "fileUtil.h"
#include "linkedlist.h"

#define PATIENT_COUNT 3

void eacher(uint index, ListType nodeValue) {
  printPatient(&nodeValue);
}

int main(void) {

  LinkedList list = init();


  FILE * file = fopen("patients.bin", "rb");
  assertFileOpen(file);

  //Serialize data format
    //1 - index of the node - int
    //2 - name of the patient - string
    //3 - egn of the patient - long
    //4 - age - int
    //5 - symptoms of the patient - string

  Patient patient;
  int index;
  while (
    fread(&index, sizeof(int), 1, file)
    && fread(patient.name, sizeof(char), PATIENT_NAME_MAX_LENGTH, file)
    && fread(&patient.EGN, sizeof(long), 1, file)
    && fread(&patient.age, sizeof(int), 1, file)
    && fread(patient.symptoms, sizeof(char), SYMPTOMS_MAX_LENGTH, file)
  ){
    pushBack(&list, patient);
  }
  if (!feof(file)) {
    printf("Error reading file\n");
    exit(1);
  }
  fclose(file);

  forEach(&list, eacher);
  release(&list);
  return 0;
}