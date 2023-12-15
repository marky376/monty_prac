#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t
/**
 * struct bus_s - opcode for adding members if needed
 * @file - file pointer
 */;
typedef struct bus_s
{
	FILE *file;
	char *content;
}bus_t;
extern bus_t bus;
void free_stack(stack_t *head);
void f_pint(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter);
void f_pop(stack_t **head, unsigned int counter);
void push(stack_t **head, unsigned int n);
#endif
