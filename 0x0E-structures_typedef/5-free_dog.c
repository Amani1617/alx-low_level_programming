#include <stdio.h>
#include "dog.h"
#ifndef MAIN_H
#define MAIN_H

/**
 * free_dog - frees dog
 * @d: Freed dog
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->owner);
free(d->name);
free(d);
}
