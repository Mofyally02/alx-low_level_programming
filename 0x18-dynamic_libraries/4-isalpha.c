#include "main.h"

/**
 * _isalpha - check if character is a letter, uppercase and lowercase
 * @c: character
 * Return: 1 if true otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
