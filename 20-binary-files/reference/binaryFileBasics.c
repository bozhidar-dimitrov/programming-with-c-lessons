#include <stdio.h>

int main(void) {

  //rb - read binary file
  //wb - write binary file
  //ab - append binary file
  //rb+ - read and write binary file
  //wb+ - write and read binary file
  //ab+ - read and append binary file
  FILE * file = fopen("test.bin", "wb");
  if (file == NULL){
    printf("Error writing binary file \n");
    exit(1);
  }

  //Operating with the file

  fclose(file);

  return 0;
}