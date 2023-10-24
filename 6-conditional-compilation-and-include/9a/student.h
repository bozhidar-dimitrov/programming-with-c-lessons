#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

struct Student {
  struct Person details;
  double averageGrade;
};
#endif