#include "monty.h"

/**
 * f_pall - function name, print all
 * @head: first node
 * @number: integer
 */

void f_pall(stack_t **head, unsigned int number)
{
	stack_t *current = *head;
	(void)number;


	if (*head == NULL)
		return;

	while (current->next != NULL)
	{
		current = current->next;
	
	}

	while (current->prev != NULL)
	{
		printf("%d\n", current->n);
		current = current->prev;
	}
	if (current->prev == NULL)
		printf("%d\n", current->n);

}
