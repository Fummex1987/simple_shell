#include <unistd.h>
#include <stdio.h>

/**
 * main - The main function
 * Return: void
 */

int main(void)
{
	char a[] = "1\n";

	ssize_t bytesWritten = write(STDOUT_FILENO, a, sizeof(a) - 1);

	if (bytesWritten != sizeof(a) - 1)
	{
		perror("Error");
		return (1);
	}
	return (0);
}




