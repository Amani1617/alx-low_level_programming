#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: a pointer to the header of the list list_t
 * @str: a string which is newly added to the list list_t
 *
 * Return: if the function fails - NULL.
 *         otherwise - the adress of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
char *dup;
int len;
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
dup = strdup(str);
if (dup == NULL)
{
free(new);
return (NULL);
}

for (len = 0; str[len];)
len++;
new->str = dup;
new->len = len;
new->next = *head;

*head = N;

return (new);
}
