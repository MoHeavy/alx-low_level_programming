#include <unistd.h>

/**
 * _putchar - prints character c to stdout
 * @c: - Character to be printed
 * Return: 1 if successful
 * -1 on error, and errno is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
