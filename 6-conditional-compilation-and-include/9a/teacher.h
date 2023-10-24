#ifndef TEACHER_H
#define TEACHER_H

#include "person.h"

struct Teacher {
  struct Person details;
  char teachingSubject[25];
};

#endif