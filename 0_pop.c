#include "monty.h"
/**
 * f_pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (!head || !*head)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", counter);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = (*head)->next;

	if (*head)
		(*head)->prev = NULL;

	free(h);
}
