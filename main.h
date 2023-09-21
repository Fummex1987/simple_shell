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




// print function
void print_function(const char *info)

//prompt display
void  exe_prompt(void)

//execute child process
void exe_cmd(const char *info)

// receive input from the user
void user_input(char *info, size_t size)

//two command line augment
int main(int argc, char *argv[])




#endif
