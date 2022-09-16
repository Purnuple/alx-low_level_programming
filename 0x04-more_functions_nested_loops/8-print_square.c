#include "main.h"

/**
 * print_square - Print a square with #.
 *
 * @size: Is the size of the size
 * Return: To the value of void.
 */
void print_square(int size)
{
	int num;
	int k;

	num = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (num < size)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			num++;
			_putchar('\n');
		}
	}
}
