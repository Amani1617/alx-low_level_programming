#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print from 0 to 9
 * without 2 and 5
 * Return: Always 0
 */
void print_numbers(void)
{
int a = 0;

while (a < 10)
if (a != 2 && a != 4)
{
_putchar(a + '0');
a++;
}
_putchar('\n');
}
