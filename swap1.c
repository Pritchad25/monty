#include "monty.h"

/**
 * f_swap - this function adds the two top
 * elements of the stack
 * @head: the stack head
 * @counter: the line number
 *
 * Return: Nothing
 */
void f_swap(stack_t **head, unsigned int counter)
{
	int aux, length = 0;
	stack_t *a;

	a = *head;
	while (a)
	{
		a = a->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = *head;
	aux = a->n;
	a->n = a->next->n;
	a->next->n = aux;
}
