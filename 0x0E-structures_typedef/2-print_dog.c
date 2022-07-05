#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints all the data of a dog
 * @d: A dog structure.
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (*d != NULL)
	{
	char *name;
	int age;
	char *owner;

	name = (*d).name;
	age = (*d).age;
	owner = (*d).owner;

	if (name == NULL)
	{
		printf("Name: (nil)");
	}else if (age == NULL)
        {
                printf("Age: (nil)");
        }else if (owner == NULL)
        {
                printf("Owner: (nil)");
        }else
	{
		printf("Name: %s\nAge: %d\nOwner: %s", name, age, owner);
	}
	}
}


