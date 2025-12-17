#ifndef __THREADS_H__
#define __THREADS_H__

//Extern declarations of global variables should be in the corresponding header file
extern int threadsCount;

void createNewThread();

int getCount();

void setCount(int newValue);

#endif // __THREADS_H__
