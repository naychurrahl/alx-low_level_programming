#include "main.h"

/**
 * _puts - returns length of an array
 *
 * @s: pointer
 *
 * Return: (0)
 */
void _puts(char *s)
{
	if (s)
	{
		while (*s)
		{
			_putchar(*s++);
		}
		_putchar('\n');
	}
}
