#include "monty.h"
#define _GNU_SOURCE
#include <stdio.h>
#include "monty.h"
#include <stdlib.h>
/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 * Retunr: always success
 */

int main(int argc, char *argv[])
{
	size_t line_number;
	FILE *file;
	char *filename;
	ssize_t read;
	char *line = NULL;
	char *line = NULL;
	stack_t *stack = NULL;
	size_t len = 0;

	line_number = 0;
	if (argc != 2)
	{
		 fprintf(stderr, "USAGE: monty file");
		 exit(EXIT_FAILURE);
	}
	filename = argv[1];
	file = fopen(filename, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file%s\n", filename);
		exit (EXIT_FAILURE);
	}
	while ((read = getline(&line, &len, file)) != -1)
	{
		line_number++;
		parse_line(line, &stack, line_number);
		if (line)
		{
			free(line);
			line = NULL;
		}
	}
	if (stack)
	{
		free_stack(stack);
		stack = NULL;
	}
	fclose(file);

	exit(EXIT_SUCCESS);
}
