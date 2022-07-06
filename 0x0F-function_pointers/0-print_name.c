#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to function
 * Return: 0
 */
void print_name(char *name, void (*f) (char *)
{
	if (name && f)
		f(name);
}