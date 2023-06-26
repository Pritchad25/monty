#include "monty.h"

/**
 * f_pstr - this function prints the string starting
 * at the top of the stack followed by a new line.
 * @head: the head node of the stack
 * @counter: the line number
 *
 * Return: Nothing
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *d;
	(void)counter;

	d = *head;

	while (d)
	{
		if (d->n > 127 || d->n <= 0)
		{
			break;
		}
		printf("%c", d->n);
		d = d->next;
	}
	printf("\n");
}
