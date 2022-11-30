#include "lists.h"

/**
 * sum_listint - gives the sum of all info in linked list.
 * @head: head of list.
 *
 * Return: sum of all data.
 */
int sum_listint(listint_t *head)
{
int s;
s = 0;
while (head != NULL)
{
s += head->n;
head = head->next;
}
return (s);
}
