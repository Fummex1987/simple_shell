#include "main.h"

/**
 * main - The main function
 *
 * Return: Always success
 */

int main(void)
{
	char *prompt = "Shell$ ";
	char *input = NULL;
	size_t len = 0;

	while (1)
	{
		write(STDOUT_FILENO, prompt, strlen(prompt));

		if (getline(&input, &len, stdin) == -1)
		{
			perror("getline");
			exit(EXIT_FAILURE);
		}
		free(input);
		input = NULL;
	}
	return (0);
}




