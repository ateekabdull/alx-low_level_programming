#include "main.h"
/**
 * puts_half - print half of a string.
 * @str: character
 */
void puts_half(char *str)
{
	int m, n, i, j;

	m = _strlen(str) / 2;

	if (_strlen(str) % 2 == 0)
	{
		for (i = m; i < _strlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
	else if (_strlen(str) % 2 != 0)
	{
		n = (_strlen(str) - 1) / 2;
		for (j = n; j <= _strlen(str); j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}

/**
  * _strlen - finds the length of a string.
  * Return: length of c.
  * @pointer: pointer.
  */
int _strlen(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
