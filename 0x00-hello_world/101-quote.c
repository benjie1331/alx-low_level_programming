#include <unistd.h>
/**
 * main - using write to print
 * Return: 1 unsuccess
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, text, 59);
	return (1);
}
