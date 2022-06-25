#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter. lowercase or uppercase
 * @c: The character to check
 * Return: 0 if not
 */

int _isalpha(int c)

{

	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}

}

