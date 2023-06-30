#include "dog.h"


/**
 * *new_dog - a function that initialize a variable of type struct dog.
 * @name: struct to initialize
 * @age: input
 * @owner: input
 * Return: Nothing.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int nmlgth = 0, wnrlgth = 0, x;

	if (new_dog == NULL || !(owner) || !(name))
	{
		free(new_dog);
		return (NULL);
	}
	for (; name[nmlgth]; nmlgth++)
		;
	for (; owner[wnrlgth]; wnrlgth++;)
		;

	new_dog->name = malloc(nmlgth + 1);
	new_dog->owner = malloc(wnrlgth + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (x = 0; x < nmlgth; x++)
		new_dog->name[x] = name[x];
	new_dog->name[x] = '\0';
	new_dog->age = age;

	for (x = 0; x < wnrlgth; x++)
		new_dog->owner[x] = owner[x];
	new_dog->owner[x] = '\0';
	return (new_dog);

}


