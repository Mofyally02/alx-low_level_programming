#include "main.h"

/**
 *  _strchr - locate a character in a string
 *  @s: string to check
 *  @c: character to locate
 *  Return: a pointer to the first occurrence of the character c
 *  in the string s, or NULL if the character is not found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}

