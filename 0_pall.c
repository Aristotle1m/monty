#include "monty.h"
/**
 * c_pall - function that prints the stack
 * @max: head of the stacks
 * @counter: there should be no return
 * Return: no return
*/
void c_pall(stack_t **max, unsigned int counter)
{
	stack_t *x;
	(void)counter;

	x = *max;
	if (x == NULL)
		return;
	while (x)
	{
		printf("%d\n", x->n);
		x = x->next;
	}
}
