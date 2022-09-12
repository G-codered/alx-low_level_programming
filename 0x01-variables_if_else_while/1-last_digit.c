#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the string in the printf function
 *
 * Description: the function in the main, this program prints lesser than, greater than, equal to and not equal to
 * Return: (0)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d Is %d and is greater than 5\n", n);
	else if (n == 0)
		printf("Last digit of %d Is %d and is 0\n", n);
	else if (0<n<6)
		printf("Last digit of %d Is %d and is less than 6 and not 0\n", n);
	return (0);
}