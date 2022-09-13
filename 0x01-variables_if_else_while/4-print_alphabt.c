#include <stdio.h>
                                                  /**
 * main - print the string in the putchar function
 *
 * Descripton: the main function
 * this program prints both lowercase except e and q alphabets
 * Return: (0)
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'e' && ch != 'q')
	putchar (ch);

	putchar ('\n');
	return (0);
}
