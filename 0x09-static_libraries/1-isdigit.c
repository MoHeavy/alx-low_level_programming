#include "main.h"

/**
 * _isdigit- checks if digit between 0-9
 * @c: character to be checked
 * Return: 1 if successful, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
