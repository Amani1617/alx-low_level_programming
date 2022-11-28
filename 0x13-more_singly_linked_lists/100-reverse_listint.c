#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint -  a function that reverses a listint_t linked list.
 * @head: a pointer to the address of the list at the head.
 *
 * Return: a pointer to the first node of rev_list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *above, *below;
if (head == NULL || *head == NULL)
return (NULL);

below = NULL;
while ((*head)->next != NULL)
{
above = (*head)->next;
(*head)->next = below;
below = *head;
*head = above;
}
(*head)->next = behind;

return (*head);
}
