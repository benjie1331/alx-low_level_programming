#include "main.h"
/**
 * print_diagsums - fcn that prints the sum of 2 diganolas
 * @a: input
 * @size: input
 */
void print_diagsums(int *a, int size)
{
	int j, k, m, l, z, f;

	l = 0;

	z = 0;


	for (k = 0, j = 0; j < size; j++, k += (size + 1))
	{
		l = l + a[k];

	}

	for (f = (size - 1), m = 0; m < size; m++, f += (size - 1))
	{
		z = z + a[f];

	}
	printf("%d, ", l);
	printf("%d\n", z);
}
