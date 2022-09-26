/**
 * _strcat - function that joins two strings.
 *
 * @s: pointer to destnation input
 * @b: pointer to source input
 * @n: some other important thing
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for(i = 0; i < n; i++)
		s[i] = b;
	return(s);
}
