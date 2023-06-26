#include "monty.h"

/**
 * f_div - this function divides the two top
 * elements of thestack
 * @head: the head node of the stack
 * @counter: the line number
 *
 * Return: Nothing
 */

void f_div(stack_t **head, unsigned int counter)
{
	int length = 0, auxVar;
	stack_t *h;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}

	if (length < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;

	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxVar = h->next->n / h->n;
	h->next->n = auxVar;
	*head = h->next;
	free(h);
}
