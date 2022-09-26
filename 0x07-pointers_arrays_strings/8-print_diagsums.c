#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: 2d array(int)
 * @size: size of the array (int)
 */

void print_diagsums(int *a, int size)
{
	int i, num1 = 0, num2 = 0;

	for (i = 0; i < size; i++)
	{
		num1 += a[i];
		num2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", num1);
	printf("%d\n", num2);
}
