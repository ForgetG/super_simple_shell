#ifndef SSS_H
#define SSS_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

pid_t getpid(void);
pid_t getppid(void);
pid_t fork(void);


#endif
