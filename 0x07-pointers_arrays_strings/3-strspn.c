#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of prefix.
 * @s: the string checked
 * @accept: the string which is compared to.
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j = 0;
for (; s[i]; i++)
{
for (j = 0; a[j]; j++)
{
if (s[i] == a[j])
{
break;
}
}
if (s[i] != a[j])
break;
}
return (i);
}
