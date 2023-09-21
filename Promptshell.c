#include "main.h"

/*
 * main - Prompt input collect 300 inputs
 * description - This program collects user input in an infinite loop.
 * return - 0
 */
int main(void)
{
char collect_input[300];

while (true)
{
show_prompt();
user_input(collect_input, sizeof(collect_input));

exe_prompt();
}
return 0;
}



