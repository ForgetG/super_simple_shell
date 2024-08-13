/**
 * main - Prints the parent process ID.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Parent PID: %d\n", getppid());
	return (0);
}
