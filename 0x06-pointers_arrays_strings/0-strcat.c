#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: nothing
 */
void _strcat(char *dest, char *src)
{
	int i, j;
	char dest[100], src[100];

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[i] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	
	dest[i] = '\0';

}
