#include "monty.h"

/**
 * f_pop - this function prints the node that is
 * at the top of the stack
 * @head: the head node of the stack
 * @counter: the line number
 *
 * Return: Nothing
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *f;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	f = *head;
	*head = f->next;
	free(f);
}
