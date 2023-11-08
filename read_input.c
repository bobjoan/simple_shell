#include <stdio.h>
#include <unistd.h>
#include "shell.h"
/**
 * read_input - reads input from the user
 * @input: prompt from user
 * @size: size of string
 * Return: 0
 */

void read_input(char *input, size_t size)
{
	int i = 0;

	while (input[i] != '\0')
	{
		write(stream, &input[i], 1);
		i++;
	}
}
