#include "monty.h"
#include <string.h>

/**
 * f_push - Pushes an element to the stack.
 * @head: Pointer to the stack
 * @current: Line number in the file
 */

void f_push(stack_t **head, unsigned int current)
{
	char *token = strtok(NULL, " \t\n");
	int value;
	stack_t *new_node;

	if (!token)
	{
		fprintf(stderr, "L%u: usage: push integer\n", current);
		exit(EXIT_FAILURE);
	}

	value = atoi(token);

	new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: mallloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head)
		(*head)->prev = new_node;

	*head = new_node;

}
