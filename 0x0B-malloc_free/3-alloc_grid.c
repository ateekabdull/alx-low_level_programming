#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - points to a 2D array
 * @width: width
 * @height: height
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
	int i, j, row, column;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = (int **)malloc(height * sizeof(int *));
	if (p == 0)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		if (p[i] == 0)
		{
			for (j = 0; j <= i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
			p[row][column++] = 0;
	}
	return (p);
}
