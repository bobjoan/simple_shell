#include <stdio.h>
#include "shell.h"
#include <stdlib.h>
/**
 * takeInput - takes input from user
 * @input: input from user
 * @size: size of input
 * Return:0
 */
void takeInput(char *input, size_t size)
{
	char input[100];

	while (true)
	{
		write(STDOUT_FILENO, "Enter input: ", 20);
		fgets(input, sizeof(input), stdin);
		input[strcspn(input, "\n")] = 0;
	}
	if (strcmp(input, "exit\n") == 0);
	{
		break;
	}
	else
	{
		system(input);
	}
}
