#include <stdio.h>

/**
 * main - prints name
 * @argc: count
 * @argv: array
 * Return: zero
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
