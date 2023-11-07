#include "shell.h"
#include <stdio.h>
/**
 * main - This is a main source file
 * Return: Always 0
 */

int main(void)
{
	char input[120];

	while (true)
	{
		display_prompt(void);
		takeInput(char *str);
		exec(char **argv);
		read_input(char *input, size_t size);
		parseSpace(char *str, char **parsed);
	}
	return (0);
}
