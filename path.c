#include "main.h"

/**
 * main - Handle the path
 * @argc: The number of arguments to be passed
 * @argv: The pointer to the array of arguments
 * Return: the path
 */

int main(int argc, char *argv[])
{
char *command = argv[1];
char *path = getenv("PATH");

if (path == NULL)
{
char *error = "Error: PATH environment not set.\n";
write(STDERR_FILENO, error, strlen(error));
return (1);
}
char *path_token = strtok(path, ":");
while (path_token != NULL)
{
char full_path[1024];
snprintf(full_path, sizeof(full_path), "%s/%s", path_token, command);
if
(access(full_path, X_OK) == 0)
')'
{
execvp(full_path, &argv[1]);
char *error = "Error: Command failed.\n";
write(STDERR_FILENO, error, strlen(error));
return (1);
}
path_token = strtok(NULL, ":");
}
char *error = "Command not found in PATH.\n";
write(STDERR_FILENO, error, strlen(error));
return (1);
}

