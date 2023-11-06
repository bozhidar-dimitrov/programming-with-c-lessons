#include <stdio.h>

#define SIZE 5

int main(void) {
	
	//This is a simple array
	int arr[SIZE] = {1, 2, 3, 4, 5};
	
	#if SIZE > 3
	int variable = 10;
	#else 
	int variable = 5;
	#endif
	
	return 0;
}
