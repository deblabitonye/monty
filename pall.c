#include "monty.h"
/**
 * f_pall - prints the stack
 * @counter: line_number
 * @head: head of the stack
 * Return: No return
 */
void f_pall(stack_t **head, unsigned int counter)
{
stack_t *h;
(void)counter;

h = *head;
if (h == Null)
Return;
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
