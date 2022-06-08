#include "main.h"

/**
 * print_alphabet_x10 - prints a- z ten times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int k;
	char h;

	for (k = 0; k < 10; k++)
	{
		for (h = 'a'; h <= 'z'; h++)
		{
		_putchar(h);
		}
		_putchar('\n');
	}

}
