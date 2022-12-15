#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 9; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (n > 9)
	{
	_putchar((n/10) + '0');
	}
	_putchar((n % 10) + '0');
	}
	_putchar('\n');
	}
}
