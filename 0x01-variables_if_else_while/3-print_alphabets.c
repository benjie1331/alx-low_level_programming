#include <stdio.h>
/**
 * main - entry point
 * Description: print lower and upper case alphabet
 * Return: 0 sucess
 */

int main(void)
{
	char chr = 'a';

	char CHR = 'A';

	while (chr <=  'z')
	{
		putcahr(chr);
		chr++;

	}
	while (CHR <= 'Z')
	{
		putchar(CHR);
		CHR++;

	}
}
