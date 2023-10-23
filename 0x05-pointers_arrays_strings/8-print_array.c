#include "main.h"
/**
 * print_array - fcn that prints n elements of an array
 * @a: input
 * @n: input
 */
void print_array(int *a, int n)
{
	int k;

	int j = 0;

	for (k = n; k > 0; k--)
	{
		printf("%d", a[j]);

		if (k == 1)
		break;

		else
		printf(", ");

		j++;

	} printf("\n");
}
