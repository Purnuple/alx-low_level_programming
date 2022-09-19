#include "main.h"
/**
 * swap_int -  swaps the values of two integers
 * @a : input a
 * @b : input b
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
