#include <stdio.h>
#include "main.h"

/**
 *main - Prints it's name
 *@argc: argument count
 *@argv: pointer to an array of pointers to each argument's address
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}


