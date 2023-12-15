#include "monty.h"
/**
 * f_pint - prints the value at the top of the stack
 * @head: stack head
 * @counter: line number
 * Return: NULL
*/
bus_t bus;

void f_pint(stack_t **head, unsigned int counter)
{
	if (!head || !*head)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
