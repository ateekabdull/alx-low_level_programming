#include <stdio.h>

/**
 * main - prints argumets
 * @argc: count
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	
	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	printf("\n");
	return (0);
}
