#include <stdio.h>

void quit_command() {
  printf("The program is exiting\n");
}

void print_command() {
  printf("The program is printing the value\n");
}

#define CALL_COMMAND(COMMAND) COMMAND ## _command()

int main(void) {
  CALL_COMMAND(print);
  CALL_COMMAND(quit);
  
  return 0;
}