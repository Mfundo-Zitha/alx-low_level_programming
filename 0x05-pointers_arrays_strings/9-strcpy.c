#include "main.h"

/**
 * _strcpy - copier el contenido
 * @dest: tHIS IS THE destiny
 * @src: This is nthe copia
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
