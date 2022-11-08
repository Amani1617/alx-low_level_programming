#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: array of elements
 * Return: 1 (on sucess)
 */
int _strlen(































#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: array of elements
 * Return: pointer (on Sucess)
 */
char *_strd(char *s)
{
char *dest;
unsigned int i;
if (str == 0)
{
return (NULL);
}
size = _strlen(str) + 1;
dest = (char *) malloc(size *sizeof(char));
if (dest == 0)
{
return (NULL);
}
_strcpy(dst, str);
return (dst);
}


i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}

