#include "main.h"


/*
 * exe_cmd - Execute a command
 * void -  This function creates a new child process using fork and executes
 * the given command in that child process.
 * discription - Execute a command or implement the "exit" built-in
 * main - Display a prompt and read user input
 *
 * @param command: The user-entered command.
 */

void exe_cmd(const char *command)
{
if (strcmp(command, "exit") == 0)
{
exit(0);
}
else
{
print_function("Executing: %s\n", command);
}
}

int main(void)
{
char input[MAX_COMMAND_LENGTH];

while (1)
{
print_function("myshell> ");
if (fgets(input, sizeof(input), stdin) == NULL)
{
break;
}
size_t len = strlen(input);
if (len > 0 && input[len - 1] == '\n')
{
input[len - 1] = '\0';
}
exe_cmd(input);
}
return (0);
}

