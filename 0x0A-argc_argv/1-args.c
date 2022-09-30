#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints the number of arguments
 *        passed into it
 *
 * @argc:arg that holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return:0
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	int i = 0, m;

	while (i < argc)
	{
		m = i;
		i++;
	}
	printf("%d\n", m);
	return (0);
}
