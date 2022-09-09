#include <stdio.h>
/**
 * main -  program that prints all the numbers of base 16 in lowercase
 * Descriptin
 * You can only use the putchar function
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
	        }
	}
	putchar('\n');
	return (0);
}
