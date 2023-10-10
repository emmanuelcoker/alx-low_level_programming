#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - defining dog struct with properties
 * @name: name of dog as char
 * @age:  age of dog as float
 * @owner: owner of dog as char
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
