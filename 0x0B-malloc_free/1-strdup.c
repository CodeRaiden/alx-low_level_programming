#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */

char *_strdup(char *str)
{
	int i = 1, int a = 0;

	if(str == NULL)
	{
		return (NULL);
	}

	char *s = malloc(i * sizeof(char) + 1);

	while(str[i])
	{
		i++;
	}

	if(str == NULL)
        {
                return (NULL);
        }

	while(a < i)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}


