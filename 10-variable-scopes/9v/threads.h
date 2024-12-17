#ifndef THREADS_H_
#define THREADS_H_

extern void createNewThread();

extern int threadCount;
//Not allowed: state is declared static in threads.c
//extern int state;

int getState();
void setState(int newState);

#endif