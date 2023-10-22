#include "monty.h"

/**
 * free_stack - frees a doubly linked list representing a stack
 * @top: pointer to the head of the stack
 */
void free_stack(stack_t *top)
{
	stack_t *current_node;

	current_node = top;
	while (top)
	{
		current_node = top->next;
		free(top);
		top = current_node;
	}
}
