#include "main.h"
#include "dog.h"

/**
 * init_dog - makes a dog
 *
 * @d: pointer too struct to be init
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
