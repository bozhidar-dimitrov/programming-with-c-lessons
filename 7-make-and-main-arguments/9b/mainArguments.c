#include <stdio.h>

//Array of strings:
//char * str[] = {"mainArguments.exe", "Hello", "5", "Ok"};
//char ** argv - двумерен масив от символни низове
//int main(int argc, char ** argv)
int main(int argc, char * argv[]) {

    printf("Arguments count: %d\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    return 0;
}