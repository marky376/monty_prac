#include "monty.h"

/**
 * monty_error - Prints an error message and exits.
 * @msg: The error message
 * @counter: Line number in  the file.
 */

void monty_error(char *msg, unsigned int counter)
{
	fprintf(stderr, "L%u: %s\n", counter, msg);
	exit(EXIT_FAILURE);
}
