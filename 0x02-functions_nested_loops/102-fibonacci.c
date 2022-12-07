#include <stdio.h>

/**
 * numLength - returns the length of the string
 *
 * @num: operand number
 *
 *
 * Return: number of digits
 */
int numLength(int num)
{
int length = 0;
if (!num)
{
return (1);
}
while (num)
{
num = num / 10;
length += 1;
}
return (length);
}

/**
 * *main - prints the first 98 of fibo seq_
 * Return: 0
 */


int main(void)
{
unsigned long fib1 = 1, fib2 = 2, tmp, max = 100000000, fib1o = 0,
tmpo = 0, fib2o = 0;
short int i = 1, inital0s;

while (i <= 98)
{
if (fib1o > 0)
printf("%lu", fib1o);
inital0s = numLength(max) - 1 - numLength(fib1);
while (fib1o > 0 && inital0s > 0)
{
printf("%i", 0);
inital0s--;
}
printf("%lu", fib1);

tmp = (fib1 + fib2) % max;
tmpo = fib1o + fib2o + (fib1 + fib2) / max;
fib1 = fib2;
fib1o = fib2o;
fib2 = tmp;
fib2o = tmpo;

if (i != 98)
printf(", ");
else
printf("\n");
i++;
}
return (0);
}
