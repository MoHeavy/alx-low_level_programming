#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @k: input number as an integer.
 *
 * Return: last digit
 */
int print_last_digit(int k)

{
	int last_digit;

	if (k < 0)
	{
		last_digit = (-1 * (k % 10));
		_putchar (last_digit + '0');
		return (last_digit);
	}

	else
	{
		last_digit = (k % 10);
		_putchar (last_digit + '0');
		return (last_digit);
	}

}
