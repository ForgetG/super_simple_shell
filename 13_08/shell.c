#include "sh.h"

/**
 * main - Entry point for the shell.
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[BUFFER_SIZE];
	char *args[64];
	char *token;
	int i;

	while (1)
	{
		printf("myshell> ");
		if (!fgets(buffer, BUFFER_SIZE, stdin))
		{
			break;
		}

		i = 0;
		token = strtok(buffer, " \n");
		while (token != NULL)
		{
			args[i++] = token;
			token = strtok(NULL, " \n");
		}
		args[i] = NULL;

		if (args[0] != NULL)
		{
			execute_command(args);
		}
	}

	return (0);
}

/**
 * execute_command - Executes a command.
 *
 * @args: Command and arguments.
 */
void execute_command(char **args)
{
	pid_t pid;

	if (strcmp(args[0], "cd") == 0)
	{
		if (args[1] == NULL)
		{
			fprintf(stderr, "myshell: expected argument to \"cd\"\n");
		}
		else
		{
			if (chdir(args[1]) != 0)
			{
				perror("myshell");
			}
		}
	}
	else if (strcmp(args[0], "exit") == 0)
	{
		exit(0);
	}
	else
	{
		pid = fork();
		if (pid == 0)
		{
			if (execvp(args[0], args) == -1)
			{
				perror("myshell");
			}
			exit(EXIT_FAILURE);
		}
		else if (pid < 0)
		{
			perror("myshell");
		}
		else
		{
			waitpid(pid, NULL, 0);
		}
	}
}
