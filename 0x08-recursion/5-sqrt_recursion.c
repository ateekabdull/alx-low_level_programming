#include "main.h"

/**
 * _sqrt_recursion - natural square root recursively
 * @n: number
 * Return: 0
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);
	return (isqrt(1, n));
}

/**
 * isqrt - helper function
 * @n: num
 * @i: root
 * Return: e
 */
int isqrt(int n, int i)
{
	if (n > i)
		return (-1);
	else if (n * n == i)
		return (n);
	return (isqrt(n + 1, i));
}
