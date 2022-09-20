#include "main.h"

/**
 * _print_rev - returns length of an array
 *
 * @s: pointer
 *
 * Return: (0)
 */
void _print_rev(char *s)
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
