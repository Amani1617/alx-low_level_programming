#include <stdio.h>

/**
 * numlen - Returns the length of th number
 * @num: operand number
 * Return: number of digits
 */
int numlen(int num)
{
int len = 0;
if (!num)
{
return (1);
}
while (num)
{
num = num / 10;
len += 1;
}
return (len);
}

/**
 * main - returns the first 98 sequence of numbers
 * Return: 0
 */
int main(void)
{
unsigned long f1 = 1, f2 = 2, T, MAX = 100000000, F1O = 0, F2O = 0, TO = 0;
short int a = 1, initals;

while (a <= 98)
{
if (F1O > 0)
printf("%lu", F1O);
initals = numlen(MAX) - 1 - numlen(f1);
while (F1O > 0 && initals > 0)
{
printf("%i", 0);
initals--;
}
printf("%lu", f1);
T = (f1 + f2) % MAX;
TO = F1O + F2O + (f1 + f2) / MAX;
f1 = f2;
F1O = F2O;
f2 = T;
F2O = TO;

if (a != 98)
printf(" ,");
else
printf("\n");
a++;
}
return (0);
}
