#include "main.h"

/**
 * _isdigit - check if char is digit or not
 * @c: the char
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
