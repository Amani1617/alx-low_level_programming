#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments
 *
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list varilist;
unsigned int m;
int sum = 0;

if (n == 0)
return (0);
va_start(varilist, n);
for (m = 0; m < n; m++)
sum += va_arg(varilist, int);
va_end(varilist);
return (sum);
}
