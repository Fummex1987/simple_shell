#include "main.h"

/**
 * print_function - Print information to standard output.
 *
 * This function is responsible for printing the provided information
 * to the standard output (usually the console).
 *
 * @param info: The information to be printed.
 */


void print_function(const char *info)
{
write(STDOUT_FILENO, info, strlen(info));
}

