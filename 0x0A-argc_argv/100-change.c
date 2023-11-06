#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: input
 * @argv:input
 * Return: int
 */
int main(int argc, char *argv[])
{
	int arr[] = {25, 10, 5, 2, 1};

	int valueofcents = 0;

	int bucks = atoi(argv[1]), i;

	if (argc == 2)
	{

	for (i = 0; i < 5; i++)
	{
		if (bucks >= arr[i])
		{
			valueofcents += bucks / arr[i];
			bucks = bucks % arr[i];
			if (bucks % arr[i] == 0)
				break;
		}


	}
	printf("%d\n", valueofcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
