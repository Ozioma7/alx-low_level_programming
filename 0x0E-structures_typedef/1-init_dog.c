#include <stdlib.h>
#include "dog.h"

/**
 * init_dog -  function that initialize a variable of type struct dog
 * @d: pointer to struct
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
