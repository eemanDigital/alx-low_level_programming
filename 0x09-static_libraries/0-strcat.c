#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: the source string to add with @dest
 * @dest: string to concat src
 * Return: sum of string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int d_len = 0;

	while (dest[i++])
		d_len++;
	for (i = 0; src[i]; i++)
		dest[d_len++] = src[i];
	return (dest);
}
