#include "sh.h"

/**
 * main - Waits for a process to change state.
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
		sleep(2);
	}
	else
	{
		wait(NULL);
		printf("Parent process\n");
	}

	return (0);
}
