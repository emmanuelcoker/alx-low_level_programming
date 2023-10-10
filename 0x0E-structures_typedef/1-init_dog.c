#include "dog.h"

/**
 * init_dog - initialize dog properties
 * @d: dog struct pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner of dog
 * Return: return void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
