#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: is the string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;

	i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

}

/**
 * _strlen - kjfjd
 *
 * @p: ldflkdf
 *
 * Return: k
 */
void _strlen(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
	}
	return (i);
}
