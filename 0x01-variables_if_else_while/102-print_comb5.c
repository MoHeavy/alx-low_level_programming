#include <stdio.h>

/**
 * main - entry point
 * Description: Prints numbers between 00 to 99.
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, k, n, z, op1, op2;

i = k = n = z = 48;
while (z < 58)
{
	n = 48;
	while (n < 58)
	{
		k = 48;
		while (k < 58)
		{
			i = 48;
			while (i < 58)
			{
				op1 = (z * 10) + n;
				op2 = (k * 10) + i;
				if (op1 < op2)
				{
					putchar(z);
					putchar(n);
					putchar(' ');
					putchar(k);
					putchar(i);
					if (z == 57 && n == 56 && k == 57 && i == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			k++;
		}
		n++;
	}
	z++;
}
putchar('\n');
return (0);
}
