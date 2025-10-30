#include <stdio.h>

#define CREATE_NAME(PREFIX, NAME) PREFIX ## NAME

#define CREATE_CLASS(CLASS_NAME) \
  struct CLASS_NAME; \
  \
  void print ## CLASS_NAME (struct Student student); \
  \
  struct Student new ## CLASS_NAME(); \


CREATE_CLASS(Student)
CREATE_CLASS(Teacher)

void warningLog() {
  printf("Some warning\n");
}

int main(void) {
  
  int infoLog = 5;
  printf("%d\n", infoLog);
  printf("%d\n", CREATE_NAME(info, Log));

  CREATE_NAME(warning, Log)();

  return 0;
}