#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t -typedef for dog struct
*/
typedef struct dog dog_t;


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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
