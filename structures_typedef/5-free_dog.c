#include "dog.h"

/**
 * free_dog - fress a dog structure
 * @d: pointer to struct to free
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);

}
