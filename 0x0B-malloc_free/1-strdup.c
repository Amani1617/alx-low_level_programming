#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of string
 * @s: array of elements
 * Return: 1 (on sucess)
 */
int _strlen(char *s)
{
unsigned int i;
i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}

/**
 * _strcpy - copies the string
 * @src: array of elements
 * @dest: dest array
 * Return: dest (on sucess)
 */
char _strcpy(char *dest, char *src)
{
int i = 0;
while (str[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: array of elements
 * Return: pointer (on Sucess)
 */
char *_strdup(char *str)
{
char *dst;
unsigned int size;
if (str == 0)
{
return (NULL);
}
size = _strlen(str) + 1;
dst = (char *) malloc(size *sizeof(char));
if (dst == 0)
{
return (NULL);
}
_strcpy(dst, str);
return (dst);
}
