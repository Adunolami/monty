#include "monty.h"

/**
 * f_add - adds the top two element of the stack.
 * @head: stack head
 * @counter: line_number
 * *Return: b return
 */
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *current_node;
	int len = 0, aux;

	current_node = *head;
	while (current_node)
	{
		current_node = current_node->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can,t add, stack too short\n",counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	current_node = *head;
	aux = current_node->n + current_node->next->n;
	current_node->next->n = aux;
	*head = current->next;
	free(current_node);
}
