#include "main.h"

/**
 * *_strpbrk - searches a string for srt of bytes
 * @s: pointer
 * @accept: dffd
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}
		accept = start;
		s++;
	}
	return (NULL);
}
