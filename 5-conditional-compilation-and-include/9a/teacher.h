#ifndef _TEACHER_H_
#define _TEACHER_H_

#include "person.h"

struct Teacher {
  struct Person info;
  char teachingSubject[100];
};

#endif