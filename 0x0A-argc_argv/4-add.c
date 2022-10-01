#include <stdio.h>

/**
 * main - adds up
 * @argc: count
 * @argv: array
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (!((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-'))
			{
				printf("Error\n");
				Return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
