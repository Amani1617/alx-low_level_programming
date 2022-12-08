#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * jack_bauer - prints every nminutes of the day
 * description: kept doing the hard thing
 * _putchar: prints values.
 */
void jack_bauer(void)

{
int y = 0;
int a = 0, b = 0, c = 0, d = 0;

while (y < 1440)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(':');
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');

d++;
if (d > 9)
{
d = 0;
c++;
}
if (c > 5)
{
c = 0;
b++;
}
if (b > 9)
{
b = 0;
a++;
}
y++;
}
}

