#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - priht the string in the printf function
 *
 * Description: using the main function
 * the program prints a random variable weather positive or negative
 * Return: (0)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else 	(n < 0)
		printf("%d is negative\n", n);
	return (0);
}

