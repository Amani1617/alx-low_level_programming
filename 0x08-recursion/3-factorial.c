#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: the number whose factorial is determined
 *
 * Return: if n > 0 - the factorial of n
 *         if n < 0 - 1 to show it doesn't exist
 */
int factorial(int n)
{

if (n < 0)
return (-1);
else if (n >= 0 && n <= 1)
return (1);
