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
	int i = 1;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
