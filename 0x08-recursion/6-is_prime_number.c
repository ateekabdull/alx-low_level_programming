#include "main.h"

/**
 * is_prime_number - rr
 * @n: number
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (is_prime(n, n - 1));
}

/**
 * is_prime - helper function
 * @n: num
 * @i: factor
 * Return: 0
 */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	return (is_prime(n, i - 1));
}
