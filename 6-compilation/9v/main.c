#define MAX_SIZE 5

int main(void) {

  //This is our array
  int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
  
  #if MAX_SIZE > 6
  int myvar = 10;
  #else
  int myvar = 5;
  #endif

  return 0;
}