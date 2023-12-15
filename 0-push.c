#include "monty.h"
/**
 * push - function name
 * @head: first node
 * @n: new data
 */

void push(stack_t **head, unsigned int n)
{
	stack_t *new_node, *current = *head;

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
		return;

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}

		new_node->prev = current;
		current->next = new_node;
	}
}
