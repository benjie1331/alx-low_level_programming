#include "main.h"
/**
 * print_to_98 - Function that prints to 98
 * Description: function that prints to 98
 * @n: input
 */
void print_to_98(int n)
{
	int counter;

	if (n > 98)
	{
	for (counter = n; counter > 98; counter--)
	{
		printf("%d, ", counter);
	}
	else
		for (counter = n; counter < 98; counter++)
		{	printf("%d, ", counter);
	}
	}
	printf("98\n");
}
