#include "monty.h"

/**
 * f_pall - this function prints the stack.
 * @head: the head node of the stack
 * @counter: the counter variable.
 *
 * Return: Nothing
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
