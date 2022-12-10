#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of array
 * @array: array
 * @size: size of array
 * @action: pointer to the function to use
 *
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	if (array && action)
	{
		for (c = 0; c < size; c++)
		{
			action(array[c]);
		}
	}
}
