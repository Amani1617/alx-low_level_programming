#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if a character is uppercase
 * @c: variable text
 * Return: Always 0.
 */
int _isupper(int c);
{
if (c >= 'A' && c <= 'Z')
{
printf("%c: %d\n", c, _isupper(c));
return (1);
}
else
{
printf("%c: %d\n", c, _isupper(c));
return (0);
}
}
