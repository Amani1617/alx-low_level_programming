#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts the unique ones in the list.
 *
 * @head: a pinter to the head of the list.
 *
 * Retrun: if the list is looped - 0.
 *         otherwise: the number of unique nodes in the list
 */
void looped_listint_len(const listint_t *head)
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

/**
 * print_listint_safe - prints a listint_t safe linked list.
 * @head: a pointer to the head of listint_t list.
 * Retrun: the numer of nodes in the list.
 */
void print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;
nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
printf(".> [%p] %d\n", (void *)head, head->n);
}
return (nodes);
}
