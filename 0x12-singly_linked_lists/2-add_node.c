#include "lists.h"
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
char *D;
int L;
list_t *N;
N = malloc(sizeof(list_t));
if (N == NULL)
return (NULL);
D = strD(str);
if (D == NULL)
{
free(N);
return (NULL);
}

for (L = 0; str[L];)
L++;
N->str = D;
N->L = L;
N->next = *head;

*head = N;

return (N);
}
