#include<stdio.h>

/**
 * main - prints all combination of one digit
 * Return: Always 0
 */
int main(void)
{
int n;
for (n = 48; n < 58; n++)
putchar(n);

putchar(',');
putchar(' ');
putchar('\n');
return (0);
}
