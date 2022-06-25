#include <stdio.h>
#include "main.h"

/**
 *main - prints all arguments passed
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int counter;
	
	for(counter=0; counter < argc; counter++)
	{
		printf("%s\n", argv[counter]);
	}

	return (0);
}


