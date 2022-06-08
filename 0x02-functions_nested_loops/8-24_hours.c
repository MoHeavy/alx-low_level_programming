#include "main.h"

/**
 * jack_bauer - Prints the minutes of a day
 * Return: 0
 */
void jack_bauer(void)
{
	int h, j, k, l;

	for (h = 48; h <= 50; h++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 53; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					if (h >= 50 && j >= 52)
						break;
					_putchar(h);
					_putchar (j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
