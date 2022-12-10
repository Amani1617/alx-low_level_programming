#include "function_pointers.h"

/**
  *int_index - searches for an integer.
  *@array: array of integers.
  *@size: number of elements in array.
  *@cmp: pointer to function used to compare values.
  *
  *Return: index of first element.
  *-1 if no element is found or siz <= 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (array && cmp && size > 0)
	{
		for (c = 0; c < size; c++)
		{
			if (cmp(array[c]) != 0)
			{
				return (c);
			}
		}
	}
	return (-1);
}
