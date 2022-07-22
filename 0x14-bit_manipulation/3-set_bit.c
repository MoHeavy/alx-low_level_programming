#include "main.h"

/**
 * set_bit - sets value of bit to 1
 * @n: pointer of the int
 * @index: index of bit
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int h;

	if (index > 63)
		return (-1);

	h = 1 << index;
	*n = (*n | h);

	return (1);
}
