#include <stdio.h>

//__FILE__ - the name of the working file
//__LINE__ - the number of line that is being proceessed
//__DATE__ - the current date of preprocessing
//__TIME__ - the current time of the preprocessing

int main(void) {

    printf("File: %s\n", __FILE__);
    printf("Line: %d\n", __LINE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);

    return 0;
}