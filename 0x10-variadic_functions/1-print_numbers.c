#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  prints numbers, followed by a new line.
 * @n: number of passed integers
 * @separator: string printed between numbers
 * @...: a variable value of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list numbs;
unsigned int into;
va_start(numbs, n);
for (into = 0; into < n; into++)
{
printf("%d", va_arg(numbs, int));
if (into != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(numbs);
}
