#include <stdio.h>
#include <stdlib.h>

/**
 **malloc_checked - allocates memory using malloc
 *@b: the size of memory to be allocated
 *
 *Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);

}


