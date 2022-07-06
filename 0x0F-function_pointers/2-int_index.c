#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @size: number of elements in the array array
 * @array: the array itself
 * @cmp: pointer to the function
 * Return: if no element matches, -1
 * if size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}

	return (-1);
}
