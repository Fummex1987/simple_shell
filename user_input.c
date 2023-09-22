#include "main.h"

/**
 * user_input - Read user input from stdin.
 *
 * This function reads a line of text from the standard input (stdin) and stores
 * it in the 'info' buffer. It also handles the case where the input is an
 * empty line or an error occurs.
 *
 * @param info: A buffer to store the user input.
 * @param size: The size of the buffer.
 * @return: None
 */

#include "main.h"

void user_input(char *command, size_t size)
{
if (fgets(command, size, stdin) == NULL)
{
if (feof(stdin))
{
print_function("\n");
exit(EXIT_SUCCESS);
}
else
{
print_function("Error while reading input.\n");
exit(EXIT_FAILURE);
}
}
command[strcspn(command, "\n")] = '\0';
}

