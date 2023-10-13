#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes char c
 * Description: _putchar
 * Return: success (0).
 * @c: Char to print
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
