#include "main.h"

/**
 * swap_int - swaps two integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: nada
 */
void swap_int(int *a, int *b)
{
	int store = *a;

	*a = *b;
	*b = store;
}
