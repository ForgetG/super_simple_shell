#include "sh.h"

/**
 * main - Prints the current process ID.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Current PID: %d\n", getpid());
	return (0);
}
