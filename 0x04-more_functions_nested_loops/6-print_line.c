#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a stright line using '_'
 * @n: the number of '_' to be printed
 * Return: Always 0
 */
void print_line(int n)
{
int len;

if (n > 0)
for (len = 0; len <= n; len++)
_putchar('_');
}
_putchar('\n');
return (0);
}
