#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * string_length: prints number of characters.
 * @s: store character.
 * @: store character.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = _strlen(s);

	begin = s;
	end = s;

	for (c = 0; c < (length - 1); c++)
		end++;

	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
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
