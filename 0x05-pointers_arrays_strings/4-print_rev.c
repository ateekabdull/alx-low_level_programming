#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: the string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int n, i;

	i = _strlen(s) - 1;

	for (n = i; n >= 0; n--)
		_putchar(s[n]);

	_putchar('\n');
}

/**
 * _strlen - kjdff
 *
 * @p: the pointer
 *
 * Return: 0
 */
int _strlen(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
	}
	return (i);

}
