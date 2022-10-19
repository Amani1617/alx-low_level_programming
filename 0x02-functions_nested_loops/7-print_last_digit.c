#include"main"

/**
 * print_last_digit - prints the last digit of a numger
 * @n: the numger
 * Return: value of the last digit 
 */
int print_last_digit(int n)
{
	int ld= n%10
if (ld < 0)
	ld *= -1
		putchar (ld + '0');
	return (0);
}

