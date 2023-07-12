#include <stdio.h>

size_t binary_search(int *array, size_t low, size_t high, int value);
size_t min(size_t a, size_t b);
void print_array(int *array, size_t low, size_t high);

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: value to search for in the array.
 *
 * Return: First index where value is located or -1 if array is NULL or -1 if
 *	value is not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, high;

	if (!array || size == 0)
		return (-1);

	bound = 1;
	while (bound < size && *(array + bound) < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, *(array + bound));
		bound *= 2;
	}

	high = min(bound, size - 1);

	printf("Value found between indexes [%ld] and [%ld]\n", bound / 2, high);

	return (binary_search(array, bound / 2, high, value));
}

/**
 * binary_search - Searches for value in array from the indexes low to
 * high(inclusive) using the Binary search algorithm.
 *
 * @array: pointer to the first element of the array to search.
 * @low: Index to start searching at.
 * @high: Index to stop searching. Upper bound.
 * @value: Value to search for.
 *
 * Return: First index of the value being searched for.
 *	-1 if array is NULL, or if value is not found.
 */
size_t binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid;

	while (low <= high)
	{
		mid = (low + high) / 2;

		print_array(array, low, high);

		if (*(array + mid) < value)
			low = mid + 1;
		else if (*(array + mid) > value)
			high = mid - 1;
		else
			return (mid);
	}

	if (*(array + low) == value)
		return (low);
	else
		return (-1);
}

/**
 * print_array - Prints elements of an array.
 *
 * @array: Array to print.
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

/**
 * min - Find minimum of two numbers.
 *
 * @a: First number.
 * @b: Second number.
 *
 * Return: Minimum of a and b.
 */
size_t min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	else
		return (a);
}