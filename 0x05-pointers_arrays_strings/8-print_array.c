#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a : integer used
 * @n : input integer
 * Return: 0 or 1
 */
void print_array(int *a, int n)
{
	int k;

	k = 0;
	for (n--; n >= 0; n--, k++)
	{
		printf("%d", a[k]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
