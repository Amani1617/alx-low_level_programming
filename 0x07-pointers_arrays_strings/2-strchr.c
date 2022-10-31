#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string we look through
 * @c: the character we look for
 * Return: a pointer to the character or NULL
 */
char *_strchr(char *s, char c)
{
if (s == NULL)
return (NULL);
for (; *s; s++)
{
if (*s == c)
return (s);
}
if (*s == c)
{
return (s);
}
return (NULL);
}
