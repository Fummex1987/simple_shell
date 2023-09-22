#include "main.h"

/**
 * main - Prompt input and collect up to 300 inputs
 *
 * Description:
 * This program collects user input in an infinite loop.
 *
 * Return:
 * 0
 */
int main(void)
{
char command[300];
while (true)
{
show_prompt();
user_input(command, sizeof(command))
exe_cmd(command);
}
return (0);
}




