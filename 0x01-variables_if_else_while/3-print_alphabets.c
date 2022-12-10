#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a newline
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
