#include "dog.h"

/**
 * init_dog - initilizes a struct
 *
 * @d: pointer to struct
 * @name: name
 * @age: age
 * @owner: owner
 * 
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	name = d->name; 
	age = d->age;
	owner = d->owner;
}
