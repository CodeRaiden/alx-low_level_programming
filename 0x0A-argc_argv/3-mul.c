#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *main - prints the product of two numbers
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int result = 0;

	if(argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}


