#include <stdio.h>
#include <string.h>

#include "osinfo.h"

int main(void) {
  struct osinfo info = getinfo();
  printf("OS Name: %s \n", info.osname);
  printf("OS bit version %d\n", info.bitversion);
  return 0;
}

struct osinfo getinfo(void) {
  struct osinfo info;
  strcpy(info.osname, "Linux");
  info.bitversion = 32;

  return info;
}