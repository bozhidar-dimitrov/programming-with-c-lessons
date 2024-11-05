#ifndef TEACHER_H_
#define TEACHER_H_

#include "person.h"

struct Teacher {
  struct Person information;
  char teachingSubject[100];
};

#endif