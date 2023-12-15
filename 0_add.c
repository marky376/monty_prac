#include "monty.h"

/**
 * add - Adds the top two ellements of the stack
 * @stack: Pointer to the stack
 * @current: Counter in the file
 */
void f_add(stack_t **head, unsigned int counter)
{
	if (!head || !*head || !(*head)->next)
	{
		fprintf(stderr, "L%u: add, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n += (*head)->n;
	f_pop(head, counter);

}
