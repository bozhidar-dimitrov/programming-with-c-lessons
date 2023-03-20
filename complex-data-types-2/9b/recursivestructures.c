#include <stdio.h>

struct Node {
  struct Node * next;
  int value;
};

// typedef struct {
//   TreeNode * left;  //Not allowed
//   TreeNode * right; //Not allowed
// } TreeNode;

typedef struct student {
  int number;
  char name[30];
} Student;

int main(void) {
  struct Node node1 = {next: NULL, value:5};
  struct Node node2 = {next: NULL, value:7};

  node1.next = &node2;
  printf("%d", node1.next->value);

  struct {
    int number;
    char name[30];
  } student;

  
  

  return 0;
}