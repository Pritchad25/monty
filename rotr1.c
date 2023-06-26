#include "monty.h"

/**
 * f_rotr - this function rotates the stack
 * to the bottom
 * @head: the stack head
 * @counter: the line number
 *
 * Return: Nothing
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy_p;

	copy_p = *head;
	if (*head == NULL || (*head)->next == NULL)
		return;

	while (copy_p->next)
	{
		copy_p = copy_p->next;
	}
	copy_p->next = *head;
	copy_p->prev->next = NULL;
	copy_p->prev = NULL;
	(*head)->prev = copy_p;
	(*head) = copy_p;
}
