#include "main.h"

/**
 * main - Implement the env built-in
 * @argc: The number of arguments to pass
 * @argv: The pointer to the array of arguments
 *
 * Return: Return the implemented environment
 */

int main(int argc, char *argv[])
{
	for (int a = 0; a < argc; a++)
	{
		char *current = argv[a];
		int n = 0;
	}

	while (current[n] != '\0')
	{
		n++;
	}

	write(STDOUT_FILENO, current, n);
	write(STDOUT_FILENO, "\n", 1);

	return (0);
}
