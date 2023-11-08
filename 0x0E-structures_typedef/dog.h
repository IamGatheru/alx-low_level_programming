#ifndef DOG_H
#define DOG_H
/**
 * struct dog - stores information about a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Description: Stores general information about a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
