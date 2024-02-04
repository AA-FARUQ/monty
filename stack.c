#include "monty.h"

/**
 * f_stack - Sets the stack mode.
 * @stack: Pointer to the stack's head.
 * @line_number: Line number in the Monty file (unused).
 * Return: No return value.
 */
void f_stack(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
    bus.lifi = 0;
}
