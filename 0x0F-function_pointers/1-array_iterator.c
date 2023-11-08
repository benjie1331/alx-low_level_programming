#include "function_pointers.h"
/**
 * array_iterator - fcn that executes a fcn given as a para
 * @array:input
 * @size: size of arr
 * @action: fcn
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int last_elment = &array + size - 1;

	if (array && size && action)
	{
		while (array <= last_elment)
			action(*array++);
	}
}
