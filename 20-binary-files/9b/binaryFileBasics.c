#include <stdio.h>
#include <stdlib.h>

int main(void) {
  /**
   * Binary file modes:
   *  rb - open binary file for reading
   *  wb - open binary file for writing
   *  ab - open binary file for appending
   *  rb+ - open binary file for reading and writing
   *  wb+ - open binary file for writing and reading
   *  ab+ - open binary file for appending and reading
   */
  FILE * file = fopen("test.bin", "wb");
  if (file == NULL) {
    printf("Error opening a file \n");
    exit(1);
  }

  //Working with the file:
  printf("File opened correctly \n");

  fclose(file);

  return 0;
}