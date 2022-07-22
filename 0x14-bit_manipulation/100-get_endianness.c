#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 little endian
 */
int get_endianness(void)
{
	unsigned int z;
	char *d;

	z = 1;
	d = (char *) &z;

	return ((int)*d);
}
