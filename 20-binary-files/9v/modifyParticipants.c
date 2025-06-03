#include <stdio.h>
#include <stdlib.h>

#include "Participant.h"
#include "Date.h"

int main(void) {

  FILE * file = fopen("maraton.bin", "rb+");
  if (file == NULL){
    printf("Error opening file \n");
    exit(1);
  }

  Participant participant;

  //
  //SEEK_SET - offset by the beginning of the file
  //SEEK_CUR - offset by the current cursor position
  //SEEK_END - offset by the end of the file
  fseek(file, sizeof(Date) + sizeof(int), SEEK_SET); 

  fread(&participant, sizeof(Participant), 1, file);

  printParticipant(&participant);

  Participant boris = {
    .name = "Boris",
    .number = 15,
    .timeInMinutes = 300
  };

  fseek(file, -sizeof(Participant), SEEK_CUR);
  fwrite(&boris, sizeof(Participant),1, file);

  //Equivelent fseek(file, 0, SEEK_SET);
  rewind(file); //Returns the cursor in the begnning of the file

  fclose(file);

  return 0;
}