#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of the list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
listint_t *tp;
listint_t *c;

if (head != NULL)
{
c = *head;
while ((tp = c) != NULL)
{
c = c->next;
free(tp);
}
*head = NULL;
}
}
