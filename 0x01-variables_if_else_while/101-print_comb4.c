#include <stdio.h>

/**
 * main - entry point
 * Description: Prints numbers between 012 to 789.
 * Return: 0
 */
int main(void)
{
	int i, c, m;

	i = 48;
	c = 48;
	m = 48;

	while (c < 58)
	{
		i = 48;
		while (i < 58)
		{
			m = 48;
			while (m < 58)
			{
				if (c != i && c != m && i != m && c < i && i < m)
				{
					putchar(c);
					putchar(i);
					putchar(m);
					if (i == 56 && c == 55 && m == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				m++;
			}
			i++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
