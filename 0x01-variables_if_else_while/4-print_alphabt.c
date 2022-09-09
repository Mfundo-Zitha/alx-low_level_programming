#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 *
 * Description: using the main function
 * You can only use the putchar
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}	
}
putchar('\n');
return (0);
}
