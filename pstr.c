#include "monty.h"

/**
 * f_pstr - Prints the string starting at the top of the stack,
 * followed by a newline.
 * @stack: Pointer to the stack's head.
 * @line_number: Line number in the Monty file.
 * Return: No return value.
 */
void f_pstr(stack_t **stack, unsigned int line_number)
{
    stack_t *current_node;
    (void)line_number;

    current_node = *stack;

    while (current_node)
    {
        if (current_node->n > 127 || current_node->n <= 0)
        {
            break;
        }
        printf("%c", current_node->n);
        current_node = current_node->next;
    }

    printf("\n");
}
