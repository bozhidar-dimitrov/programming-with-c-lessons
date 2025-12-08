#ifndef __THREADS_H__
#define __THREADS_H__

//Extern variables should be declered in the header file
extern int threadsCount;

//This is definition and is not allowed in header files:
//extern int threadsCount = 0;
void createNewThread();

#endif // __THREADS_H__
