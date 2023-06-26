#include "monty.h"

/**
 * f_mul - this function multiplies the two top
 * elements of the stack.
 * @head: the head node of the stack.
 * @counter: the line number
 *
 * Return: Nothing
 */
void f_mul(stack_t **head, unsigned int counter)
{
	int aux, length = 0;
	stack_t *i;

	i = *head;

	while (i)
	{
		i = i->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = *head;
	aux = i->next->n * i->n;
	i->next->n = aux;
	*head = i->next;
	free(i);
}
