#include <stdio.h>
#include <windows.h>
#include <mmsystem.h>

int main(void) {
    DWORD ms = timeGetTime();  /* живее в winmm.dll */
    printf("Milliseconds since system start: %lu\n", (unsigned long)ms);
    return 0;
}