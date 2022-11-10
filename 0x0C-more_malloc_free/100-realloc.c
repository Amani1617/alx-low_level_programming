#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *mutate, *relloc;
unsigned int t;
if (ptr != NULL)
mutate = ptr;
else
{ return (malloc(new_size)); }
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{ free(ptr);
return (0); }
relloc = malloc(new_size);
if (relloc == NULL)
return (0);
for (t = 0; t < (old_size || t < new_size); t++)
{
*(relloc + t) = mutate[t];
}
free(ptr);
return (relloc);
}
