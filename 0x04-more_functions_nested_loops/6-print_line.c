#include "main.h"

/**
 * print_line - draws a straight line
 * @n: times the straight line is printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
