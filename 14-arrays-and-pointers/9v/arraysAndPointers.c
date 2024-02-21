#include <stdio.h>

int main(void) {

  int arr[3] = {1, 2, 3};
  int * p = arr;
  for(int i = 0; i < 3; i++) {
    printf("arr[%d]-&arr[i]:%p-arr[i]:%d\n", i, &arr[i], arr[i]);
    printf("p[%d]-&p[i]:%p-p[i]:%d\n", i, &p[i], p[i]);
    printf("p[%d]-p+1:%p-*(p+1):%d\n", i, p+i, *(p+i));
    printf("arr[%d]-arr+1:%p-*(arr+1):%d\n", i, arr+i, *(arr+i));
  }

  //address arithmetic - adding integers to pointers and array names
  //Allowed operators:
  //-Addition - +
  //-Subtraction - -
  //-Incrementation - ++
  //-Decrementation - --
  //p++ == p = p + 1
  
  char name[] = "Ivan";
  for (char * ptr = name; *ptr != '\0'; ptr++) {
    printf("%c\n", *ptr);
  }

  printf("arr:%p\n", arr);

  return 0;
}