#include "main.h"
/**
 * leet - Encodes a string to 1337.
 * @str: string to encode
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int first_i = 0, second_i;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[first_i])
	{
	for (second_i = 0; second_i <= 7; second_i++)
	{
	if (str[first_i] == leet[second_i] ||
	str[first_i] - 32 == leet[second_i])
	str[first_i] = second_i + '0';
	}
	first_i++;
	}
	return (str);
}
