#include <stdio.h>
#include <stdlib.h>

int main(void) {

  //rb - read binary file
  //wb - write binary file
  //ab - append binary file
  //rb+ - read and write binary file
  //wb+ - write and read binary file
  //ab+ - append and read
  FILE * file = fopen("test.bin", "wb");
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }

  fclose(file);

  return 0;
}