#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct
 *
 * @d: the struct to be printed
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)");
	else if (name == NULL)
		printf("Name: (nil)");
	else if (owner == NULL)
		printf("Owner: (nil)");
	else if (age >= NULL)
		printf("Age: (nil)");
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
