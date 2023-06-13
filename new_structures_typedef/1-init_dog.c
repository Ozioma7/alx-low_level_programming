#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: pointer to dog struct
 * @name: name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
