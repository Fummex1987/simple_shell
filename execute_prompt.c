#include "main.h"

/*
 * main - execute function
* Description  - function that creates a child  id
* return - null
*/


void exe_cmd(const char *info)

{

pid_t   new_child = fork();

if (new_child == -1)
{

perror(“ERROR CREATING”);
exit(EXIT_FAILURE);
}

else if (new_child == 0)
{
exeve(info, info,
(perror(“execute”);
exit(EXIT_FAILURE);

}

else
{
wait(NULL);
}

}

