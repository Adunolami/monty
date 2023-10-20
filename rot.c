#include "monty.h"

/**
 * f_rotr- rotates the stack to the bottom
 * @head: stack head
 * @counter: line_number
 * return: no number 
 */
void f_rotr(stack_t **head. _attribute_((unused)) unsigned int counter)
{
	stack_t *cpy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev  = copy;
	(*head) = copy;
}
