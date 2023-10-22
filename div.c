#include "monty.h"

/**
 * f_div - Divides the top two elements of the stack.
 * @head: Pointer to the stack's head
 * @counter: Line number in the script
 * Return: No return value
 */

void divide_top_top_elements(stack_t **head, unsigned int counter)
{
	stack_t *current_node;
	int len = 0, result;


	current_node = *head;
	while (current_node)
	{
		current_node = current_node->next;
		len++;
	}
	
	if (len < 2)
	{
		fprintf(stderr, "L%d: Can't divide, Stack is too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	
	current_node = *head;
	
	if (current_node->n == 0)
	{
		fprintf(stderr, "L%d: Division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	
	result = current_node->next->n / current_node->n;
	current_node->next->n = result;
	*head = current_node->next;
	free(current_node);
}
