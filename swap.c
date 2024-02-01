#include "monty.h"

/**
 * swap_top_two - Swaps the top two elements of the stack.
 * @stack: Pointer to the stack's head.
 * @line_number: Line number in the Monty file.
 * Return: No return value.
 */
void swap_top_two(stack_t **stack, unsigned int line_number)
{
	stack_t *current_node;
	int stack_length = 0, temp_value;

	current_node = *stack;

	while (current_node)
	{
		current_node = current_node->next;
		stack_length++;
	}

	if (stack_length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	current_node = *stack;
	temp_value = current_node->n;
	current_node->n = current_node->next->n;
	current_node->next->n = temp_value;
}
