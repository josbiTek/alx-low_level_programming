#include <stdio.h>

/**
 * Main - Prints the numbers from 0 to 9
 *Description: prints all single digit numbers of base 10
 * Return: Always (Success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return	(0);
}
