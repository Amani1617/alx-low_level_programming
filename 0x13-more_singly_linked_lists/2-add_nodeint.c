#include "lists.h"

/**
 * add_nodeint - a new node to be added at the  start of llist.
 * @head: head of list.
 * @n: n of elements.
 *
 * Return: address of the new element. Null if not successful.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;

return (*head);
}
