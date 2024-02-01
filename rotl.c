#include "monty.h"

/**
 * rotate_stack_left - Rotates the stack to the top.
 * @stack: Pointer to the stack's head.
 * @counter: Line number in the Monty file (unused).
 * Return: No return value.
 */
void rotate_stack_left(stack_t **stack, __attribute__((unused)) unsigned int counter)
{
    stack_t *current_node = *stack, *next_node;

    if (*stack == NULL || (*stack)->next == NULL)
    {
        return;
    }

    next_node = (*stack)->next;
    next_node->prev = NULL;

    while (current_node->next != NULL)
    {
        current_node = current_node->next;
    }

    current_node->next = *stack;
    (*stack)->next = NULL;
    (*stack)->prev = current_node;
    (*stack) = next_node;
}
