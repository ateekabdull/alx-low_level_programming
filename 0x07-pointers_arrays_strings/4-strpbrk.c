#include "main.h"

/**
 * *_strpbrk - searches a string for srt of bytes
 * @s: pointer
 * @accept: dffd
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
		return (NULL);

	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}
	return (NULL);
}

/**
 * *_strchr - jkkjfsj
 * @s: idsfidfidf
 * @c: jffjfjf
 * Return: dfklklfd
 */
char *_strchr(char *s, char c)
{
	do	{
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}
