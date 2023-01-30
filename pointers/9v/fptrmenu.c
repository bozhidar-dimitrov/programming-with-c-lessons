#include <stdio.h>

#define OPTIONS_COUNT 4

void option1(void) {
  printf("Executing option 1 \n");
}

void option2(void) {
  printf("Executing option 2 \n");
}

void option3(void) {
  printf("Executing option 3 \n");
}

void option4(void) {
  printf("Executing option 4 \n");
}

typedef struct {
  char name[30];
  void (*procedure)(void);
} MenuOption;

void printmenu(MenuOption options[], int optionscount) {
  printf("--------------------\n");
  for (int i = 0; i < optionscount; i++) {
    printf("%d. %s\n", i + 1, options[i].name);
  }
  printf("0. Exit\n");
  printf("--------------------\n");
}

void startmenu(MenuOption options[], int optionscount) {
  while(1) {
    int choice = 0;

    do {
      printmenu(options, optionscount);
      printf("Please select an options (0-%d)", optionscount);
      scanf("%d", &choice);
    } while (choice < 0 || choice > optionscount);

    if (choice == 0) break;
    options[choice - 1].procedure();
  }
}

int main(void) {

  MenuOption options[OPTIONS_COUNT] = {
    {"Option 1", option1},
    {"Option 2", option2},
    {"Option 3", option3},
    {"Option 4", option4},
  };
  
  startmenu(options, OPTIONS_COUNT);

  return 0;
}