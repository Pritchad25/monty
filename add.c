#include "monty.h"

/**
 * f_add - this function adds the two top
 * elements of the stack
 * @head: the head node of the stack
 * @counter: the line number.
 *
 * Return: Nothing
 */

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int aux, len = 0;

	h = *head;

	while (h)
	{
		h = h->next;
		len++;
	}

	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
