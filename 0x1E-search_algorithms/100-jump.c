#include <stdio.h>
#include <math.h>

size_t min(size_t a, size_t b);

/**
 * jump_search - Searches for a value in a sorted array of integers using
 * the Jump search algorithm.
 *
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements in the array.
 * @value: value to search for in the array.
 *
 * Return: First index where value is located or -1 if array is NULL or
 *	if the value is not found in the array.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev;

	if (!array)
		return (-1);

	step = 0;
	prev = 0;

	while (*(array + step) < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step,  *(array + step));

		prev = step;
		step += sqrt(size);

		if (step >= size)
			break;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);
	while (*(array + prev) < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, *(array + prev));

		if ((prev + 1) == min(step, size))
			break;

		prev++;
	}

	if (*(array + prev) == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, *(array + prev));
		return (prev);
	}
	else
		return (-1);
}

/**
 * min - Find the minimum of two numbers.
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