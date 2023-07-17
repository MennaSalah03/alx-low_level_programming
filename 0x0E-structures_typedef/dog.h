#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information on dogs
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of the owner
 *
 * Description: A structure featuring a database of dogs taking
 * information about the dogs themselves and their owners.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
