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
	if (name == NULL)
		printf("Name: (nil)");
	if (owner == NULL)
		printf("Owner: (nil)");
	if (age >= NULL)
		printf("Age: (nil)");

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
