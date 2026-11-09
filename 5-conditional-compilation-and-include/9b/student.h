#ifndef STUDENT_H_
#define STUDENT_H_

#include "person.h"

typedef struct {
    Person info;
    int number;
    float averageGrade;
} Student;
#endif