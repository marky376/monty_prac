#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;

	if (!head || !*head || !(*head)->next)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}
	h = (*head)->next;
	(*head)->next = h->next;
	h->prev = (*head)->prev;
	(*head)->prev = h;
	h->next = *head;

	*head = h;
}
