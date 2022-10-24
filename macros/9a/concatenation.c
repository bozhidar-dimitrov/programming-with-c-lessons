#include <stdio.h>

void print_command(void) {
  printf("Printing to the console..\n");
}

void quit_command(void) {
  printf("The program is quitting\n");
}

#define CALL_COMMAND(COMMAND) COMMAND ## _command()

int main(void) {

  CALL_COMMAND(print); //print_command();
  CALL_COMMAND(quit); //quit_command();

  return 0;
}