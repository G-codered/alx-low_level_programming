#include <stdio.h>

/**
 * main - print the string in the putchar function
 *
 * Descripton: the main function
 * this program prints both lowercase and uppercase alphabets
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar (ch);

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	putchar (ch);

	putchar ('\n');  
	return (0);
}
