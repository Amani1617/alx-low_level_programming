#include "lists.h"

/**
 * print_listint - prints all members of a list
 * @h: header of the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t #nodes = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
nnodes++;
}
return (#nodes);
}
