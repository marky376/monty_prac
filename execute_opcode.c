#include "monty.h"

void execute_opcode(char *opcode, stack_t **head, unsigned int counter)
{
	if (strcmp(opcode, "push") == 0)
		f_push(head, counter);
	else if (strcmp(opcode, "pall") == 0)
		f_pall(head, counter);
	else if (strcmp(opcode, "pint") == 0)
		f_pint(head, counter);
	else if (strcmp(opcode, "pop") == 0)
		f_pop(head, counter);
	else if (strcmp(opcode, "swap") == 0)
		f_swap(head, counter);
	else if (strcmp(opcode, "add") == 0)
		f_add(head, counter);
	else if (strcmp(opcode, "nop") == 0)
		f_nop(head, counter);
	else
		monty_error("unknown instruction", counter);

}
