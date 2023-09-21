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


int handling(int argc, char *argv[]);


void print_function(const char *info);


void show_prompt(void);


void user_input(char *input, size_t input_size);


void exe_prompt(void);

#endif
