#include "monty.h"

/**
 * f_div - Divides the 2nd element by the top element in the stack.
 * @stack: Pointer to the stack's head.
 * @line_number: Line number in the Monty file.
 * Return: No return value.
 */
void f_div(stack_t **stack, unsigned int line_number)
{
	stack_t *current_node;
	int stack_length = 0, result;

	current_node = *stack;

	while (current_node)
	{
		current_node = current_node->next;
		stack_length++;
	}

	if (stack_length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	current_node = *stack;

	if (current_node->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	result = current_node->next->n / current_node->n;
	current_node->next->n = result;
	*stack = current_node->next;
	free(current_node);
}
