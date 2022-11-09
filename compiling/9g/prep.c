/* 
 * author: bdimitrov
 *
 */
 #include <stdio.h>
 #define ARRAY_SIZE 5
 
 //This is simple program
 int main(void) {
 	int array[ARRAY_SIZE] = {1, 2, 3, 4, 5};
 	int sum = 0;
 	for (int i = 0; i < ARRAY_SIZE; i++) {
 		sum += array[i];
 	}
 	
 	return 0;
 }
