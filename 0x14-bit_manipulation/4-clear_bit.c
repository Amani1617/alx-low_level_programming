#include "main.h"
/**
 * clear_bit - clears a bit to null.
 * @n: the number
 * @index: the position where bit is set
 * Description: sets 1 bit to 0
 * section header: the header of this function is holberton.h
 * Return: 1 in success -1 in fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
