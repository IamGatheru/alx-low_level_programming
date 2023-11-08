#include "dog.h"
/**
 * init_dog - initilizes the variable of type struct dog
 * @d: pointer to structure
 * @name: pointer to dog name
 * @age: age of dog
 * @owner: pointer to owner of dog.
 * Return: void
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
