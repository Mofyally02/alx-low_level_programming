#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random number to variable in each time
 * it execures an prints it
 * Return: Always 0 (success)
 */
int main{void}
{
	int n;
	srand(time(0));
	n = rand() -RAD_MAX/2;
	if (n > 0)
	{
		printf(%d is positive\n",n);
	}
	else if (n ==0)
	{
		printf("%d is zero \n", n);
	}
	else if ( n < 0)
	{
		printf("%d is negative\n",n);
	}
	return (0);
}
