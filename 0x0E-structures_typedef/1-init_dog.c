#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog.
 * @d: pointer to struct type dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owwner
 * Return:
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
