#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: printed string between string
 * @n: passed number of strings to function
 *
 * Retrun: no return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list varlist;
unsigned int t;
char *s;
va_start(varlist, n);
for (t = 0; t < n; t++)
{
s = va_arg(varlist, char*);
if (s)
printf("%s", s);
else
printf("(nil)");
if (t < n - 1)
if (separator)
printf("%s", separator);
}
printf("\n");
va_end(varlist);
}
