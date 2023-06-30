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
	dog_t *new_dg;
	int nmlgth = 0, wnrlgth = 0, x;

	if (new_dg == NULL || !(owner) || !(name))
	{
		free(new_dg);
		return (NULL);
	}
	for (; name[nmlgth]; nmlgth++)
		;
	for (; owner[wnrlgth]; wnrlgth++)
		;

	new_dg->name = malloc(nmlgth + 1);
	new_dg->owner = malloc(wnrlgth + 1);

	if (new_dg->name == NULL || new_dg->owner == NULL)
	{
		free(new_dg->name);
		free(new_dg->owner);
		free(new_dg);
		return (NULL);
	}
	for (x = 0; x < nmlgth; x++)
		new_dg->name[x] = name[x];
	new_dg->name[x] = '\0';
	new_dg->age = age;

	for (x = 0; x < wnrlgth; x++)
		new_dg->owner[x] = owner[x];
	new_dg->owner[x] = '\0';
	return (new_dg);

}


