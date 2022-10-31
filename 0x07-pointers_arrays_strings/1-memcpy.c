#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: the place we copy to
 * @src: the place we copy from
 * @n: the number of times we copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *ptr = dest;
while (n-- > 0)
{
*dest = *src;
dest++;
src++;
}
return (ptr);
}
