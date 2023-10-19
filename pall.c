#include "monty.h"
/**
 * f_pall - prints all the stack elements
 * @head: stack head
 * @counter: line number not used
 * Return: no return value
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h != NULL)
	{
		printf("%d\n", h->n);
	}
}
