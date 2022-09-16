#include <stdio.h>
#include "main.h"

/**
 * print_number-(int n)
 * @n: The number to print
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		putchar('-');
		num = -num;
	}
}
