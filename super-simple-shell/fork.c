#include "sss.h"

/**
 * main - fork
 *
 * Return: Always 0.
 */

int main(void)
{
	pid_t pid;
	int i;

	for (i = 0; i < 5; i++)
	{
		pid = fork();
		if (pid == -1)
		{
			perror("fork");
			return 1;
		}
		else if (pid == 0)
		{
			// Child process
			char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
			execve(argv[0], argv, NULL);
			perror("execve"); // execve returns only on error
			return 1;
		}
		else
		{
			// Parent process
			wait(NULL); // Wait for the child to exit
		}
	}

	return 0;
}
