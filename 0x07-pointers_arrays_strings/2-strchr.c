#include "main.h"

/**
 * *_strchr - locates a character string
 *
 * @s: the pointer
 * @c: the character string
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s != c)
			return (NULL);
		s++;
	}
	return (s);
}
