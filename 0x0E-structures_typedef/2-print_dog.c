#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - this prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	printf("Age: %f\nOwner: %s\nName: %s\n", d->age, d->owner, d->name);
}
