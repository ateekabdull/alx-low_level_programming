#include "main.h"

/**
 * is_palindrome - pal
 * @s: string
 * Return: nothing
 */
int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (pal(s, 0, _strlen_recursion(s) - 1));
}

/**
 * pal - check
 * @s: string
 * @i: int
 * @j: int
 * Return: 1
 */
int pal(char *s, int i, int j)
{
	if (i == j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	if (i < j)
		return (pal(s, i + 1, j - 1));
	return (1);
}
