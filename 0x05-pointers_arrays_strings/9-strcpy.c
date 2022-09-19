#include "main.h"
/**
 * _strcpy - function that copies a string from
 *  one pointer to another
 *  @src: src of argument input
 *  @dest: destination of dest input argument
 *  Return: dest input parameter
 */
char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
	dest[b] = src[a];
	++b;
	}
	dest[b] = '\0';
	return (dest);
}
