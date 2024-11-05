#ifndef TEACHER_H_
#define TEACHER_H_

#include "person.h"

struct Teacher {
  struct Person info;
  char teachingSubject[26];
};

#endif