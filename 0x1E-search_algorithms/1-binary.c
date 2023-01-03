#include "search_algos.h"

/**
 * print_array - Prints the values in an array
 * @array: The array of integers
 * @l: The left side of the array
 * @r: The right side of the array
 */
static void print_array(int *array, size_t l, size_t r)
{
	printf("Searching in array: ");
	while(l <= r)
	{
		if (l < r)
			printf("%d, ", array[l++]);
		else
			printf("%d\n", array[l++]);
	}
}

/**
 * _search - A recursive function to do binary search
 * @array: The array to be searched
 * @l: The left side of the array
 * @r: The right side of the array
 * @value: The value to locate
 *
 * Return: If value is not present in array or array is NULL, return -1.
 * else, return the first inex where value is located.
 */
static int _search(int *array, size_t l, size_t r, int value)
{
	size_t mid = l + (r - l) / 2;

	if (l > r)
		return (-1);

	print_array(array, l, r);
	if (array[mid] < value)
		return (_search(array, mid + 1, r, value));
	if (array[mid] > value)
		return (_search(array, l, mid - 1, value));
	return (mid);
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: The array of values
 * @size: The number of values
 * @value: The value to locate
 *
 * Return: If value is not present in array or array is NULL, return -1.
 * else, return the first index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	return (array && size ? _search(array, 0, size - 1, value) : -1);
}

