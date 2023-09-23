#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <fcntl.h>
#include <sys/syscall.h>
#include <signal.h>
#include <error.h>
#include <sys/stat.h>
#include <string.h>
#include <sys/wait.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>



void exe_cmd(const char *command);
void print_function(const char *info);
void show_prompt(void);
void user_input(char *info, size_t size);


/**
* exe_cmd - Execute a command.
*
* void -  This function creates a new child process using fork and executes
* the given command in that child process.
*/



#endif
