#include "search_algos.h"

#define VALUE_CHECKED(array, index) \
	printf("Value checked array[%lu] = [%d]\n", index, array[index])

/**
 * linear_search - Searches for a value in an integer array
 * @array: The array of values
 * @size: The number of values
 * @value: The value to locate
 *
 * Return: If value is not present in array or array is NULL, return -1.
 * else, return the first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
	{
		for (i = 0; i < size; i++)
		{
			VALUE_CHECKED(array, i);
			if (array[i] == value)
			{
				return i;
			}
		}
	}
	return -1;
}
