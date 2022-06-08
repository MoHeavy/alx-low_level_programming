#include "main.h"

/**
 * times_table - Prints the times table
 * Return: no return
 */
void times_table(void)
{
	int s, t, u;

	for (s = 0; s <= 9; s++)
	{
		_putchar(48);
		for (t = 1; t <= 9; t++)
		{
			u = s * t;
			_putchar(44);
			_putchar(32);
			if (u <= 9)
			{
				_putchar(32);
				_putchar(u + 48);
			}
			else
			{
				_putchar((u / 10) + 48);
				_putchar((u % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
