#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: return void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_info;
	int name_length, owner_length, i;

	dog_info = malloc(sizeof(*dog_info));
	if (!dog_info || !name || !owner)
	{
		free(dog_info);
		return (NULL);
	}

	for (name_length = 0; name[name_length] != '\0'; name_length++)
		;
	for (owner_length = 0; owner[owner_length] != '\0'; owner_length++)
		;

	dog_info->name = malloc(sizeof(name) * (name_length + 1));
	dog_info->owner = malloc(sizeof(owner) * (owner_length + 1));
	if (!dog_info->name || !dog_info->owner || !dog_info->age)
	{
		free(dog_info->name);
		free(dog_info->owner);
		free(dog_info);
		return (NULL);
	}

	for (i = 0; i < name_length; i++)
		dog_info->name[i] = name[i];
	dog_info->name[i] = '\0';

	for (i = 0; i < owner_length; i++)
		dog_info->owner[i] = owner[i];
	dog_info->owner[i] = '\0';

	dog_info->age = age;

	return (dog_info);
}
