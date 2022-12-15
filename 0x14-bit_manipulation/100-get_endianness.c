#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: 1 in little indian - 0 in big indian.
 */

int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *)&a;

	if (*c)
		return (1);
	return (0);
}
