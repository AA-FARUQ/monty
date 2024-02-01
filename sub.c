#include "monty.h"

/**
 * f_sub - Subtracts the top element from the second element in the stack.
 * @stack: Pointer to the stack's head.
 * @line_number: Line number in the Monty file.
 * Return: No return value.
 */
void f_sub(stack_t **stack, unsigned int line_number)
{
	stack_t *current_node;
	int difference, node_count;

	current_node = *stack;

	for (node_count = 0; current_node != NULL; node_count++)
		current_node = current_node->next;

	if (node_count < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	current_node = *stack;
	difference = current_node->next->n - current_node->n;
	current_node->next->n = difference;
	*stack = current_node->next;
	free(current_node);
}
