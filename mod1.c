#include "monty.h"

/**
 * f_mod - this function computes the rest of
 * the division of the second top element
 * of the stack by the top element of the stack
 * @head: the head node of the stack
 * @counter: the line number
 *
 * Return: Nothing
 */
void f_mod(stack_t **head, unsigned int counter)
{
	int length = 0, aux;
	stack_t *j;

	j = *head;
	while (j)
	{
		j = j->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	j = *head;
	if (j->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = j->next->n % j->n;
	j->next->n = aux;
	*head = j->next;
	free(j);
}
