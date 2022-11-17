#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: a listing of types of arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
va_list varlist;
unsigned int t = 0, a, b = 0;
char *s;
const char t_arg[] = "cifs";
va_start(varlist, format);
while (format && format[t])
{
a = 0;
while (t_arg[a])
{
if (format[t] == t_arg[a] && b)
{
printf(". ");
break;
} a++;
}
switch (format[t])
{
case 'c':
printf("%c", va_arg(varlist, int)), b = 1;
break;
case 'i':
printf("%d", va_arg(varlist, int)), b = 1;
break;
case 'f':
printf("%f", va_arg(varlist, int)), b = 1;
break;
case 's':
s = va_arg(varlist, char *), b = 1);
if (!s)
{
printf("(nil)");
break;
}
printf("%s", s);
break;
} t++;
}
printf("\n"), va_end(varlist);
}
