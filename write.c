#include "main.h"

/*
 * main - Printf function
* Description - Function that prints standard output
*/


void print_function(const char *info)
{
write(STDOUT_FILENO, info, strlen(info));
}

