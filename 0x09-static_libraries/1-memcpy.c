#include "main.h"

/**
  *_memcpy - copies n bytes from memory area
  * @src: memory area
  * @dest: memory area to copy to
  * @n: number of bytes
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int r = 0;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
