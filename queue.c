#include "monty.h"

/**
 * f_queue - Sets the queue mode.
 * @stack: Pointer to the stack's head.
 * @line_number: Line number in the Monty file (unused).
 * Return: No return value.
 */
void f_queue(stack_t **stack, unsigned int line_number)
{
    (void)stack;
    (void)line_number;
    bus.lifi = 1;
}

/**
 * addqueue - Adds a node to the tail of the stack.
 * @new_value: New value to be added.
 * @stack: Pointer to the stack's head.
 * Return: No return value.
 */
void addqueue(stack_t **stack, int new_value)
{
    stack_t *new_node, *current_node;

    current_node = *stack;
    new_node = malloc(sizeof(stack_t));

    if (new_node == NULL)
    {
        fprintf(stderr, "Error\n");
    }

    new_node->n = new_value;
    new_node->next = NULL;

    if (current_node)
    {
        while (current_node->next)
            current_node = current_node->next;
    }

    if (!current_node)
    {
        *stack = new_node;
        new_node->prev = NULL;
    }
    else
    {
        current_node->next = new_node;
        new_node->prev = current_node;
    }
}
