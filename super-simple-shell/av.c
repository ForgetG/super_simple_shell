#include "sss.h"

/**
 * main - Prints all the arguments without using ac.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: Always 0.
 */

int	main(int ac, char **av)
{
	int	index = 0;

	while (av[index])
	{
		printf("%s\n", av[index]);
		index++;
	}
	return (0);
}
