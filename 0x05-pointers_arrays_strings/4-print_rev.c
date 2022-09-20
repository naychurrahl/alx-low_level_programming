#include "main.h"

/**
 * print_rev - returns length of an array
 *
 * @s: pointer
 *
 * Return: (0)
 */
void print_rev(char *s)
{
	if (s)
	{
		while (*s)
		{
			_putchar(*s--);
		}
		_putchar('\n');
	}
}
