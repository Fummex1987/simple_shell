#include "main.h"
/*
* main : Implement the exit
* description : standard library for the exit function to terminate the program
* return : 0
*\
int main()
{
char command[300];

while (1)
{
print_function("Enter a command (or 'exit' to quit): ");
fgets(command, sizeof(command), stdin);


if (strcmp(command, "exit\n") == 0)
{
print_function("Exiting the shell.\n");
exit(0)
}

}

return 0;
}

