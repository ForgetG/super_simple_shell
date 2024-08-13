#include "sh.h"

/**
 * main - Executes a command.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		fprintf(stderr, "Usage: %s command\n", argv[0]);
		return (1);
	}

	if (execvp(argv[1], &argv[1]) == -1)
	{
		perror("execvp");
	}

	return (0);
}
