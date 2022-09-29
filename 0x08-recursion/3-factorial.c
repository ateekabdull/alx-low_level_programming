#include "main.h"

/**
 * factorial - factorial of a number
 * @n: the number
 * Return: 0
 */
int factorial(int n)
{
	if (n <= 1)
		return (-1);
	return (n * factorial(n - 1));
}
