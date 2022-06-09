#inclde "main.h"

/**
 * more_numbers - prints the numbers between 0 and 14 10 times
 */
void more_numbers(void)
{
	int k, h;

	for (k = 0; k < 10; k++)
	{
		for (h = 0; h < 15; h++)
		{
			if (h >= 10)
				_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
		}
		_putchar('\n');
	}
}
