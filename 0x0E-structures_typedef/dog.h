#include <stdio.h>
#include <stdlib.h>

/**
 * main - defines a new struct
 * Return: 0
 */
int main(void)
{
	struct dog
	{
		char *name;
		float age;
		char *owner;
	};
}
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

