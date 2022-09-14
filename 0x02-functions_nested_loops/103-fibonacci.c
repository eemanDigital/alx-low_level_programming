#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description: programe to  print
 * program that finds and prints
 * the sum of the even-valued terms
 *
 * Return: 0
 */
int main(void)
{
	unsigned long num1 = 0, num2 = 1, sum;
	float total;

	while (1)
	{
	sum = num1 + num2;

	if (sum > 4000000)
	break;
	if ((sum % 2) == 0)
	total += sum;
	num1 = num2;
	num2 = sum;

	}
	printf("%.0f\n", total);
	return (0);
}
