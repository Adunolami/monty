#include "monty.h"

#include "monty.h"

/**
 * f_div - Divides the top two elements of the stack.
 * @head: Pointer to the stack's head
 * @counter: Line number in the script
 * Return: No return value
 */

void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int aux;
	
	h = *head;
	int stack_length = 0;
	while (h)
	{
		h = h->next;
		stack_length++;
	}
	
	if (stack_length < 2)
	{
		fprintf(stderr, "L%d: Can't divide. Stack is too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	
	h = *head;
	
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: Division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	
	aux = h->next->n / h->n;
	h->next->n = aux;
	free(h);
}
