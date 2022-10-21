#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: numbers of '/' to be printed
 * Return: Always 0
 */
void print_diagonal(int n)
{
int x, y;

for (n <= 0)
	_putchar('\n');
for  (x = 0, x < n, x++)
{
for  (y = 0,y < n, y++)
	_putchar('\n');
         _putchar('\n');
_putchar('\n');

return (0);
}
