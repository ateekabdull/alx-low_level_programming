#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: char pointer
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int length;

	for (int i = 0; s[i] != '\0'; ++i)
		_putchar(s[i]);

	length = i;



	return (length);
}
