#include "main.h"

/**
 * main - The main function
 * @argc: The arguments count
 * @argv: The pointer to the array of string
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		write(STDOUT_FILENO, "Usage: ./myshell <message>\n", 29);
		return (1);
	}

	for (int a = 1; a < argc; a++)
	{
		size_t n = strlen(argv[a]);

		write(STDOUT_FILENO, argv[a], n);
		write(STDOUT_FILENO, " ", 1);
	}

	write(STDOUT_FILENO, "\n", 1);
	return (0);
}
