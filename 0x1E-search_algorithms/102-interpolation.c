#include <stdio.h>

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm.
 *
 * @array: pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: First index of the value if found or -1 if array is NULL or
 *	if value is not found in the array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;
	double num;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && high < size)
	{
		num = (double) (high - low) / (array[high] - array[low]);
		pos = low + (num * (value - array[low]));

		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, *(array + pos));
		else
			printf("Value checked array[%ld] is out of range\n", pos);

		if (*(array + pos) < value)
			low = pos + 1;
		else if (*(array + pos) > value)
			high = pos - 1;
		else
			return (pos);
	}

	if (value == *(array + low))
		return (low);
	else
		return (-1);
}