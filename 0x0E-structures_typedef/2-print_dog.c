#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function to call
 * @d: pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("(nil)\n");
	printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("(nil)\n");
}
