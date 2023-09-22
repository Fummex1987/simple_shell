#include "main.h"


/**
 * main - Entry point of the program.
 *
 * This is the main function of the program, which is the entry
 * point for execution. It processes command-line arguments and prints them if
 * provided.
 *
 * @param argc: The number of command-line arguments.
 * @param argv: An array of strings containing the command-line arguments.
 * @return: 0 on success.
 */


int main(int argc, char *argv[])
{
if (argc == 1)
{
print_function("No command-line arguments.\n");
}
else
{
print_function("Command-line arguments:\n");
for (int i = 1; i < argc; i++)
{
print_function("Argument %d: %s\n", i, argv[i]);
}
}
return (0);
}

