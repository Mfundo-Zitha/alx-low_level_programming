#include "main.h"

/**
 * _strlen - Function that returns the lenth of a string
 *
 * @s: this is the input string
 *
 * Return: Lenth of the string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
