#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 99; i++)
	{
		for (j = i; j < 100; j++)
		{
			if (j == i)
			{
				continue;
			} else if (j != 1)
			{
				putchar(' ');
			}
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i != 98)
			{
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
