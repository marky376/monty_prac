#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * main - Entry point for the Monty bytecode interpreter.
 * @argc: The number of command-line arguments.
 * @argv: The command-line arguments.
 * Return: EXIT_SUCCESS or EXIT_FAILURE.
 */     
int main(int argc, char *argv[])
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	unsigned int counter = 0;
	stack_t *stack = NULL;
	char *opcode;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, file)) != -1)
	{
		counter++;
		opcode = strtok(line, " \t\n");
	}
	if (opcode && opcode[0] != '#') /* Ignore comments */
	{
		execute_opcode(opcode, &stack, counter);
	}
	free(line);
	fclose(file);
	free_stack(stack);

	exit(EXIT_SUCCESS);
}

