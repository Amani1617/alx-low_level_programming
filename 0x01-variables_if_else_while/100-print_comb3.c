#include <stdio.h>

/**
 * main - prints all different combinations of two digits
 *
 * Return: Always 0 (on sucess)
 */
int main(void)
{
int o = '0';
int t = '0';

for (t = '0'; t <= '0'; t++)
{
for (o = '0'; o <= '0'; o++)
{
if (!((o == t) || (t > o)))
{
putchar(t);
putchar(o);
if (!(o == '9' && t == '8'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
