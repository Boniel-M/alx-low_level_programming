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

#include <string.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - function that takes a pointer to struct dog
 * @d: is the pointer to struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
