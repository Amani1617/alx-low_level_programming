#include "main.h"
#include <stdio.h>

/**
 * is_prime_number -  returns 1 if the input integer is a prime number else 0
 * @n: number
 * Return: return - 1 if prime - return -1 if not
 */
int is_prime_number(int n)
{
int iter;
iter = 2;
if (n < 2)
{
return (0);
}
else if (n == 2 || n % 2 != iter)
return (1);
}
