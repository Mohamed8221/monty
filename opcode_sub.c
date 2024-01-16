#include "monty.h"

/**
* sub - Subtracts the top element of the stack from the second top element
* @stack: Double pointer to the head of the stack
* @line_number: The line number
*/
void sub(stack_t **stack, unsigned int line_number)
{
stack_t *temp = NULL;

if (!*stack || !(*stack)->next)
{
fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

temp = *stack;
(*stack)->next->n -= temp->n;
pop(stack, line_number);
}
