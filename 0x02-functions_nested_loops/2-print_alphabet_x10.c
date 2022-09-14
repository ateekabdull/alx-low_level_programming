#include "main.h"

/**
 * print_alphabet_x10 - sjkskj
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int r = 0, i;

	while (r < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');

		r++;
	}
}
