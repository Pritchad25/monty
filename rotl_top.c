#include "monty.h"

/**
 * f_rotl - this function rotates the stack to the top
 * @head: the stack head
 * @counter: the line number
 *
 * Return: Nothing
 */
void f_rotl(stack_t **head, unsigned int counter)
{
	stack_t *tmp = *head, *aux_var;

	if (*head == NULL || (*head)->next == NULL)
	{
		counter = 0;
		return;
	}
	aux_var = (*head)->next;
	aux_var->prev = NULL;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux_var;
	counter++;
}
