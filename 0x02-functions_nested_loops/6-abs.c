#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @k: the integer.
 * Return: absolute value
 */
int _abs(int k)
{
	if (k >= 0)
	{
		return (k);
	}
	else
	{
		return (k * -1);
	}
}
