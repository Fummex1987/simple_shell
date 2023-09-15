#include "main.h"

/**
 * handling - Handle command lines with arguments
 * @argc: The number of arguments to be passed
 * @argv: The array of pointer to the character to be passed
 * Return: 1 on success and 0 if it failed
 */

int handling(int argc, char *argv[])
{
	int a = argc;
	char *b;

	if (a < 3)
	{
		char *b = "Usage: %s <arg1> <arg2>\n";

		write(STDERR_FILENO, b, strlen(b));
		return (1);
	}
	char *arg1 = argv[1];
	char *arg2 = argv[2];

	write(STDOUT_FILENO, "Argument 1:", 16);
	write(STDOUT_FILENO, arg1, strlen(arg1));
	write(STDOUT_FILENO, "\n", 1);

	write(STDOUT_FILENO, "Argument 2:", 16);
	write(STDOUT_FILENO, arg2, strlen(arg2));
	write(STDOUT_FILENO, "\n", 1);

	return (0);

}
