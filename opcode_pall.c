#include "monty.h"

/**
* pall - Prints all the values on the stack, starting from the top of the stack
* @stack: Double pointer to the head of the stack
* @line_number: The line number
*/
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *current;

(void)line_number;

current = *stack;

while (current)
{
printf("%d\n", current->n);
current = current->next;
}
}
