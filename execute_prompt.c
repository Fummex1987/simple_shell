#include "main.h"


/**
 * exe_cmd - Execute a command.
 *
 * This function creates a new child process using fork and executes the given
 * command in that child process.
 * 
 * @param info: The command to execute.
 *
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
char command_copy[256];
strncpy(command_copy, command, sizeof(command_copy) - 1);
command_copy[sizeof(command_copy) - 1] = '\0';

char *token = strtok(command_copy, " ");
while (token != NULL && arg_count < 127)
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
