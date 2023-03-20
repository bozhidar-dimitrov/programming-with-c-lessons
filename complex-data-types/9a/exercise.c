#include <stdio.h>

typedef unsigned short us;

enum status {
  WALKING,
  RUNNING,
  BREAKING,
};

typedef enum bool {
  true = 1,
  false = 0
} Bool;

int main(void) {

  us a = 5;

  enum status robotstatus = WALKING;

  Bool isPayingAttention = true;

  return 0;
}