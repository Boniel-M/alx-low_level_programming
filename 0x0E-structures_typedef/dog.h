#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - represents the combination of data types of dog
 * with different characteristics, name age and owner
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

#endif /* DOG_H */
