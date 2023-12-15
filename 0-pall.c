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


	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
