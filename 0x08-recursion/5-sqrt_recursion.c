#include "main.h"

/**
 * _sqrt_recursion - natural square root recursively
 * @n: number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	int temp = 2;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (isqrt(n, temp));
}

/**
 * isqrt - helper function
 * @n: num
 * @i: root
 * Return: e
 */
int isqrt(int n, int i)
{
	if (i * i < n)
		return (-1);
	if (i * i == n)
		return (i);
	return (isqrt(n, i + 1));
}
