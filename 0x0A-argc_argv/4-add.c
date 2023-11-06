#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc:input
 * @argv:input
 * Return: input
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	char *c;

	if (argc == 1)
	{
		printf("0\n");
	return (0);
	}

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);

	}
	printf("%d\n", sum);
	return (0);
}
