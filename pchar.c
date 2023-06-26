#include "monty.h"

/**
 * f_pchar - this function prints the character at
 * the top of the stack, followed by a new line
 * @head: the head node of the stack
 * @counter: the line number
 *
 * Return: Nothing
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *g;

	g = *head;
	if (!g)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (g->n > 127 || g->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", g->n);
}
