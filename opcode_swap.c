#include "monty.h"

/**
* swap - Swaps the top two elements of the stack
* @stack: Double pointer to the head of the stack
* @line_number: The line number
*/
void swap(stack_t **stack, unsigned int line_number)
{
int temp = 0;
if (!*stack || !(*stack)->next)
{
fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}

temp = (*stack)->n;
(*stack)->n = (*stack)->next->n;
(*stack)->next->n = temp;
}
