#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * create_array - function that creates an array
 * @size: int
 * @c: char
 * Return: nothing
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;
	
	if (size > 0)
	{
		c = malloc(sizeof(char) * size);
		c[0] = 'A';
		return (0);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
