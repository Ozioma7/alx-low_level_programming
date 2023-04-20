#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: New Dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int a, dogNm, dogOn;

	struct dog *n_dog = NULL;

	dogNm = 0;
	while (name[dogNm] != '\0')
		dogNm++;
	while (owner[dogOn] != '\0')
		dogOn++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(dogNm + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(dogOn + 1);
        if (n_dog->owner == NULL)
        {
                free(n_dog->name);
		free(n_dog->owner);
                free(n_dog);
                return (NULL);
        }
	for (a = 0; a <= dogNm; a++)
		n_dog->name[a] = name[a];
	for (a = 0; a <= dogOn; a++)
		n_dog->owner[a] = owner[a];
	n_dog->age = age;
	return (n_dog);
}
