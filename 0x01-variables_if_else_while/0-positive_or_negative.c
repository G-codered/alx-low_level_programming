#include <stdlib.h>
#include <time.h>
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
		printf("%ld is positive\n", n)
	else if (n == 0)
		printf("%ld is zero\n", n)
	else if (n < 0)
		printf("%ld is negative\n", n)
	return (0);
}

