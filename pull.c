#include "monty.h"


/**
 * f_full - prints the stack
 * @head: stack head
 * @counter: not used
 * Return: no return
 */
void f_full(stack_t **head, unsigned int counter)
{
	stack_t *h;
    (void)counter;

    h = *head;
    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
    }
}
