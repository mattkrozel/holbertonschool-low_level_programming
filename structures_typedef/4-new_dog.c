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
	char *namecpy, *ownercpy;
	int nmlgth = 0, wnrlgth = 0, x;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[nmlgth])
		nmlgth++;
	while (owner[wnrlgth])
		wnrlgth++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	namecpy = malloc(nmlgth + 1);
	if (namecpy == NULL)
		return (NULL);
	for (x = 0; name[x]; x++)
		namecpy[x] = name[x];
	namecpy[x] = '\0';

	ownercpy = malloc(wnrlgth + 1);
	if (ownercpy == NULL)
		return (NULL);
	for (x = 0; owner[x]; x++)
		ownercpy[x] = owner[x];
	ownercpy[x] = '\0';

	new_dog->name = namecpy;
	new_dog->age = age;
	new_dog->owner = ownercpy;
	return (new_dog);
}


