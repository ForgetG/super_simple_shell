#ifndef SH_H
#define SH_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>


#define BUFFER_SIZE 1024

extern char	**environ;

void	print_env(void);
void	execute_command(char **args);

#endif
