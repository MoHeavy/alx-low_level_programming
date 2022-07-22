#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: poiter to bit
 * @index: index of the bit
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int h;

	if (index > 63)
		return (-1);
	h = 1 << index;
	*n = (*n | h);

	return (1);
}
