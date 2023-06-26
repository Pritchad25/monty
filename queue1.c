#include "monty.h"

/**
 * f_queue - this function prints the top of the stack
 * @head: the head of the stack
 * @counter: the line number
 *
 * Return: Nothing
 */
void f_queue(stack_t **head, unsigned int counter)
{
	int lifi_value = 1;
	bus.lifi = &lifi_value;

	(void)head;
	(void)counter;
}
/**
 * addqueue - this function adds a node to
 * the tail of the stack
 * @n: the new value
 * @head: the head node of the stack
 *
 * Return: Nothing.
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_Node, *aux;

	aux = *head;
	new_Node = malloc(sizeof(stack_t));

	if (new_Node == NULL)
	{
		printf("Error\n");
	}

	new_Node->n = n;
	new_Node->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_Node;
		new_Node->prev = NULL;
	}
	else
	{
		aux->next = new_Node;
		new_Node->prev = aux;
	}
}
