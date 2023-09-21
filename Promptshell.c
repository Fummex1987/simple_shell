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
char collect_input[300];
while (1)
{
show_prompt();
user_input(collect_input, sizeof(collect_input));
exe_prompt();
}
return (0);
}




