#include "main.h"
/**
 * print_last_digit - it must return the last digit
 * @n : the number to check in the code
 * Return: 0 always (Success)
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last *= -1;
	_putchar(48 + last);
	}
	return (last);
}
