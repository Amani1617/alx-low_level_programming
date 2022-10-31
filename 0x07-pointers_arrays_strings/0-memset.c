#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: a pointer to the momory area to be filled.
 * @b: the bytes.
 * @n: number of bytes.
 * Return: a pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
char *ptr = s;
while (n-- > 0)
*ptr++ = b;
return (s);
}

