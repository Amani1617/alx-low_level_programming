#include "main.h"

/**
 * times_table - prints the 9 times of no_ in table
 */
void times_table(void)
{
int n, m, p, d, s;

for (n = 0; n < 10; n++)
{
for (m = 0; m < 10; m++)
{
p = n * m;
if (p < 10 && m != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
if (p < 10)
_putchar('0' + p);

if (p > 9)
{
d = p / 10;
s = p % 10;

_putchar(44);
_putchar(32);
_putchar('0' + d);
_putchar('0' + s);
}
}
_putchar('\n');
}
}
