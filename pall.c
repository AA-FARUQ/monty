#include "monty.h"

/**
 * f_pall - Prints the elements of the stack.
 * @stack: Pointer to the stack's head.
 * @counter: Not used.
 * Return: No return value.
 */
void f_pall(stack_t **stack, unsigned int counter)
{
	stack_t *current_node;
	(void)counter;

	current_node = *stack;
	if (current_node == NULL)
		return;

	while (current_node)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
	}
}

