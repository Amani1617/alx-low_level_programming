#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string whose length is to be determined
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
int len = 0;

if (*s)
{
len++;
len += _strlen_recursion(s + 1);
}
}
