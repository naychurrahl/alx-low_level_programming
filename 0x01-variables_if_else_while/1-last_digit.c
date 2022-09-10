#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;
	char q[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m  > 5)
	{
		printf("%s %d is %d and is greater than 5\n", q, n, m);
	} else if (m == 0)
	{
		printf("%s %d is %d and is 0\n", q, n, m);
	} else if ((m < 6) & (m != 0))
	{
		printf("%s %d is %d and is less than 6 and not 0\n", q, n, m);
	}
	return (0);
}
