/**
 * reverse_array - reverses array content
 *
 * @a: pointer to int array
 * @n: number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;

	while (s < e)
	{
		temp = a[s];
		a[s] = a[e];
		a[e] = temp;
		s++;
		e--;
	}
}
