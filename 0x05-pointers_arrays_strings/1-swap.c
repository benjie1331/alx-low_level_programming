#include "main.h"
/**
 * swap_int - function to swap values of 2 int
 * Description: fcn to swap value of 2 int
 * @a: input
 * @b: input
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *b;
	*b = *a;
	*a = z;

}
