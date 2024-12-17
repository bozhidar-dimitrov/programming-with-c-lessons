#ifndef THREADS_H_
#define THREADS_H_

extern int threadsCount;

extern void createNewThread();

int getSharedState();

void setSharedState(int newState);

#endif