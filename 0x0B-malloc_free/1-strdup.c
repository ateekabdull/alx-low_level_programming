#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the lenght of a string
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
 * _strdup - duplicates a string
 *
 * @str: the string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *temp;
	int i;

	if (str == NULL)
		return (NULL);

	temp = (char *)malloc(sizeof(char *_strlen(str) + 1));

	for (i = 0; i < _strlen(str) - 1; i++)
	{
		temp[i] = str[i];
	}
	return (temp);

}
