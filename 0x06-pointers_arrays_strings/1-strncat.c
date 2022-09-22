#include "main.h"

/**
 * *_strncat - concat arg 1 & 2
 * @src: the source string to append to @dest
 * @dest: receiving string to be concatenated
 * @n: number of bytes
 * Return:pointer to the final string
 */


char *_strncat(char *dest, char *src, int n)
{
	int i = 0, d_len = 0;

	while (dest[i++])
		d_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[d_len++] = src[i];
	return (dest);
}
