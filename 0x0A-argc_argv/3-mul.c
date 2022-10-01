#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints mul
 * @argc: count
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int first, second;

	if (argc == 3)
	{
		first = atoi(argv[1]);
		second = atoi(argv[2]);

		printf("%d\n", first * second);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

}
