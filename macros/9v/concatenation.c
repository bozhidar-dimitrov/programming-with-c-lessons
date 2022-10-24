#include <stdio.h>

void print_command(void) {
  printf("The program is printing\n");
}

void quit_command(void) {
  printf("The program is exiting\n");
}

#define CALL_COMMAND(COMMAND) COMMAND ## _command()

int main(void) {

  CALL_COMMAND(print); //print_command();
  CALL_COMMAND(quit); //quit_command()

  return 0;
}