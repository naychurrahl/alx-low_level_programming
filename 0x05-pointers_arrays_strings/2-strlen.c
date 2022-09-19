#include "main.h"

/**
 * _strlen - returns length of an array
 *
 * @s: pointer
 *
 * Return: (0)
 */
int _strlen(int *s)
{
	int i = 0;

	if (s)
	{
		while (*(s + i))
		{
			--i;
		}
		return (i);
	}
}
