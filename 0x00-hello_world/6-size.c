#include <stdio.h>

/**
 * main - print the string in the printf functon
 *
 * Description: using the main function
 * this program prints the sizes of various types
 * Return: (0)
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of char: %d byte(s)\n", sizeof(c));
	printf("size of int: %d byte(s)\n", sizeof(i));
	printf("size of long int: %d byte(s)\n", sizeof(li));
	printf("size of long long int: %d byte(s)\n", sizeof(lli));
	printf("size of float: %d byte(s)\n", sizeof(f));
	return (0);
}
