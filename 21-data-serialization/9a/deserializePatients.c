#include <stdio.h>
#include "patient.h"
#include "fileUtil.h"
#include "linkedlist.h"
#include <string.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 100

void eacher(uint index, ListType value) {
  printPatient(&value);
}

int main(void) {
 
  FILE * file = fopen("patients.csv", "r");
  assertFileOpen(file);

  char line[MAX_LINE_LENGTH];

  LinkedList list = init();

  while (fgets(line, MAX_LINE_LENGTH, file) != NULL) {
    //line[strcspn(line, "\n")]  = '\0';
    char * newLinePtr = strchr(line, '\n');
    if (newLinePtr != NULL) {
      *newLinePtr = '\0';
    }
    Patient patient;
    char * token = strtok(line, ",");
    if (token != NULL) {
      strcpy(patient.name, token);
    }

    token = strtok(NULL, ",");
    if (token != NULL){
      patient.EGN = atol(token);
    }

    token = strtok(NULL, ",");
    if (token != NULL){
      patient.age = atoi(token);
    }

    token = strtok(NULL, ",");
    if (token != NULL) {
      strcpy(patient.symptoms, token);
    }

    pushBack(&list, patient);
  }
  fclose(file);

  forEach(&list, eacher);
  release(&list);
  
  return 0;
}