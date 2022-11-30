#include "lists.h"

/**
 * listint_len - returns in the number of elements found in linked.
 * @h: head of the list.
 *
 * Return: the number of nodes.
 */

size_t listint_len(const listint_t *h)
{
size_t nnodes = 0;
while (h != NULL)
{
h = h->next;
nnodes++;
}
return (nnodes);
}
