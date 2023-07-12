#include <stdio.h>

void print_array(int *array, size_t low, size_t high);

/**
 * advanced_binary - Searches for a value in a sorted array and returns the
 * first of that kind using Binary Search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: value to search for in the array.
 *
 * Return: Index of the first element to match value.
 *	-1 if array is NULL, or if value is not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t high, low, mid;
	int index;

	if (!array || size == 0)
		return (-1);

	low = 0;
	high = size - 1;
	mid = (low + high) / 2;

	if (*(array + mid) < value)
	{
		print_array(array, low, high);

		index = advanced_binary((array + mid + 1), (high - mid), value);

		if (index != -1)
			index += (mid + 1);

		return (index);
	}
	else if (*(array + mid) > value)
	{
		print_array(array, low, high);

		return (advanced_binary(array, mid, value));
	}
	else
	{
		print_array(array, low, high);

		if (*(array + mid - 1) == value)
			return (advanced_binary(array, mid + 1, value));

		return (mid);
	}

	return (-1);
}

/**
 * print_array - Print an array.
 *
 * @array: Pointer to the first element of the array to print.
 * @low: Index to start printing.
 * @high: Index to stop printing(inclusive).
 */
void print_array(int *array, size_t low, size_t high)
{
	printf("Searching in array: ");

	while (low <= high)
	{
		if (low < high)
			printf("%d, ", *(array + low));
		else
			printf("%d\n", *(array + low));

		low++;
	}
}