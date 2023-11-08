#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

int takeInput(char *input, size_t size);
void print_prompt(void);
void parseSpace(char *str, char **parsed);
void exec(char **argv);
void read_input(char *str);
void display_prompt(void);

#endif
