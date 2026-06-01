#include <stdio.h>
#include <stdlib.h>
#include "patient.h"
#include "fileUtil.h"
#include "linkedlist.h"

#define PATIENT_COUNT 3

void eacher(uint index, ListType value) {
  printPatient(&value);
}

int main(void) {

  FILE * file = fopen("patients.bin", "rb");
  assertFileOpen(file);

  LinkedList list = init();
  int index;
  Patient patient;
  while (
    fread(&index, sizeof(int), 1, file)
    && fread(patient.name, sizeof(char), PATIENT_NAME_MAX_LENGTH, file)
    && fread(&patient.EGN, sizeof(long), 1, file)
    && fread(&patient.age, sizeof(int), 1, file)
    && fread(patient.symptoms, sizeof(char), SYMPTOMS_MAX_LENGTH, file)
  ) {
    pushBack(&list, patient);
  }
  fclose(file);

  forEach(&list, eacher);
  release(&list);

  return 0;
}