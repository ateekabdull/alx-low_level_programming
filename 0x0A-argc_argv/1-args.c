#include <stdio.h>

/**
 * main - prints argc
 * @argc: count
 * @argv: array
 * Return: zero
 */
int main(int argc, char *argc[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
