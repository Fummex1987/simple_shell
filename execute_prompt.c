#include "main.h"

/**
 * exe_cmd - Execute a command.
 *
 *void -  This function creates a new child process using fork and executes
 * the given command in that child process.
 * @param command: The command to execute.
 */

void exe_cmd(const char *command)
{
pid_t child_pid = fork();
if (child_pid == -1)
{
print_function("Error forking process.\n");
exit(EXIT_FAILURE);
}
else if (child_pid == 0)
{
char *args[128];
int arg_count = 0;
char *token = strtok((char *)command, " ");
while (token != NULL)
{
args[arg_count++] = token;
token = strtok(NULL, " ");
}
args[arg_count] = NULL;
execvp(args[0], args);
print_function("Error executing command.\n");
exit(EXIT_FAILURE);
}
else
{
wait(NULL);
}
}

