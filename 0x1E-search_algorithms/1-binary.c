#include <stdio.h>

void print_array(int *array, size_t start, size_t end);

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm.
 *
 * @array: Pointer ti the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: value to search for.
 *
 * Return: Index where value is located or -1 if array is NULL or if
 *	value is not found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid;

	if (!array || size == 0)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		mid = (start + end) / 2;

		print_array(array, start, end);

		if (*(array + mid) > value)
			end = mid - 1;
		else if (*(array + mid) < value)
			start = mid + 1;
		else
			return (mid);
	}

	return (-1);
}

/**
 * print_array - prints an array.
 *
 * @array: Pointer to the first element of the array to print.
 * @start: Index to start printing from.
 * @end: Index to end printing(inclusive).
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");

	while (start <= end)
	{
		if (start < end)
			printf("%d, ", *(array + start));
		else
			printf("%d\n", *(array + start));
		start++;
	}
}