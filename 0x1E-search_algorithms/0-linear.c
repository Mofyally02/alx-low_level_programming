#include <stdio.h>

/**
 * linear_search - Searches for a value in an array of integers
 * using the linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: First index where value is located or -1 if value is not found
 *	or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, *(array + i));

		if (*(array + i) == value)
			return (i);
		i++;
	}

	return (-1);
}