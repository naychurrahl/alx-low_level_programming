#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i; j < 10; j++)
		{
			if (j = i)
			{
				continue;
			} else if (j != 1)
			{
				putchar(' ');
			}
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');
			if ((i <= 8) & (j != 9))
			{
				putchar(',');
			}
		}
	}
	putchar('\n');
	return (0);
}
