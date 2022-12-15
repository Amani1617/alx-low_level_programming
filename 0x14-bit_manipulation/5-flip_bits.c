#include "main.h"
/**
 * flip_bits - counts the bits to change the value
 * @n: the number
 * @m: the number to be compared
 * Description: compare to ints a count the diferences in bits
 * section header: the header is holberton.h
 * Return: the number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;

	a = 0;
	n = n ^ m;
	while (n)
	{
		a += n & 1;
		n >>= 1;
	}
	return (a);
}
