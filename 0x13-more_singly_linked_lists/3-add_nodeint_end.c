#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: head of the list
 * @n: the number of new nodes added
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *fresh;
listint_t *tp;

(void)tp;
fresh = malloc(sizeof(listint_t));
if (fresh == NULL)
return (NULL);

fresh->n = n;
fresh->next = NULL;
tp = *head;
if (*head == NULL)
{
*head = fresh;
}
else
{
while (tp->next != NULL)
{
tp = tp->next;
}
tp->next = fresh;
}
return (*head);
}
