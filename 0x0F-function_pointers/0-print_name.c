#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name
 * @name: name
 * @f: f
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
