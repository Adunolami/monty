#include "monty.h"

/**
 * add_node - add node to the head of the stack
 * @head: pointer to the head of the stack
 * @value: new value to be added
 * Return: no return
 */
void add_node(stack_t **head, int value)
{
	stack_t *new_node, *temp:

	temp = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error: Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}

	if (temp)
		temp->prev = new_node;

	new_node->n = value;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
