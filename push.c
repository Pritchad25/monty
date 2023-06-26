#include "monty.h"

/**
 * f_push - this function adds a node to the stack
 * @head: the head node of the stack
 * @counter: the line number
 *
 * Return: Nothing
 */
void f_push(stack_t **head, unsigned int counter)
{
	int b, c = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
		{
			c++;
		}
		for (; bus.arg[c] != '\0'; c++)
		{
			if (bus.arg[c] > 57 || bus.arg[c] < 48)
			{
				flag = 1;
			}
		}

		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	b = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, b);
	else
		addqueue(head, b);
}
