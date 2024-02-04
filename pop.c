#include "monty.h"

/**
 * f-pop - Removes the top element from the stack.
 * @stack: Pointer to the stack's head.
 * @line_number: Line number in the Monty file.
 * Return: No return value.
 */
void f_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current_node;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	current_node = *stack;
	*stack = current_node->next;
	free(current_node);
}
