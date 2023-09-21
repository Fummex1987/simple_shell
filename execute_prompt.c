#include "main.h"


/**
 * exe_cmd - Execute a command.
 *
 * This function creates a new child process using fork and executes the given
 * command in that child process.
 * This function creates a new child process using fork and executes the given
 * command in that child process.
 *
 * Return: 0 on success.
 * @param info: The command to execute.
 *
 * 
 */

void exe_cmd(const char *info)
{
pid_t new_child = fork();
if (new_child == -1)
{
perror("ERROR CREATING");
exit(EXIT_FAILURE);
}
else if (new_child == 0)
{
if (execve(info, NULL, NULL) == -1)
{
perror("execute");
exit(EXIT_FAILURE);
}
}
else
{
wait(NULL);
}
}

