#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the unique ones in the list.
 *
 * @head: a pinter to the head of the list.
 *
 * Retrun: if the list is looped
 *         otherwise: the number of unique nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
const listint_t *tor, *hare;
size_t nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

tor = head->next;
hare = (head->next)->next;

while (hare)
{
if (tor == hare)
{
tor = head;
while (tor != hare)
{
nodes++;
tor = tor->next;
hare = hare->next;
}
tor = tor->next;
while (tor != hare)
{
nodes++;
tor = tor->next;
}
return (nodes);
}
tor = tor->next;
hare = (hare->next)->next;
}
return (0);
}
