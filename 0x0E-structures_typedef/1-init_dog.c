#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function to call
 * @d: pointer to struct in dog.h
 * @name: pointer to dog's name
 * @age: age of the dog
 * @owner: pointer to owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
