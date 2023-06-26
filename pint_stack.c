#include "monty.h"

/**
 * f_pint - this function extracts the top node
 * of the stack
 * @head: the head node of the stack
 * @counter: the line number
 *
 * Return: Nothing
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
