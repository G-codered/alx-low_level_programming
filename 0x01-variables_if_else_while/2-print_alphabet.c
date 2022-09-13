#include <stdio.h>

/**
 * main - print the string in the putchar function
 *
 * Description: the main function, this program prints lowercase alphabets
 * Return: (0)
 */

int main(void)

{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	putchar (ch);

	putchar ('\n');
	return (0);
}
