#include<stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */

int main (void)
{
	printf("Size of a char: %lu bytes(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of an long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of an float: %lu byte(s)\n", sizeof(float));
	return (0);
}
