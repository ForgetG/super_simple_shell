#include "sh.h"

/**
 * main - Forks a process.
 *
 * Return: Always 0.
 */
int main(void)
{
	pid_t pid;

	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		return (1);
	}
	else if (pid == 0)
	{
		printf("Child process\n");
	}
	else
	{
		printf("Parent process\n");
	}

	return (0);
}
