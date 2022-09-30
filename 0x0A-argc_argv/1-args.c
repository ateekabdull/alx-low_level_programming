#include <stdio.h>

/**
 * main - prints argc
 * @argc: count
 * @argv: array
 * Return: zero
 */
int main(int argc, char *argc[])
{
	if (argc > 0)
		printf("%d\n", argc);
	return (0);
}
