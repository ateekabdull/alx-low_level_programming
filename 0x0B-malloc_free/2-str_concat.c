#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: the string
 *
 * Return: 0
 */
int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}

/**
 * str_concat - concatenates two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i = 0, j = 0, n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = _strlen(s1) + _strlen(s2) + 1;

	new_str = malloc(sizeof(char) * n);

	if (new_str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		new_str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		new_str[j] = s2[i];
		i++;
		j++;
	}
	new_str[j] = '\0';

	return (new_str);
}
