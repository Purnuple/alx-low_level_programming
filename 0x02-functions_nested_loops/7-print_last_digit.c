#include "main.h"
/**
 * print_last_digit - it must return the last digit
 * @n : the number to check in the code
 * Return: 0 always (Success)
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = n % 10;

	_putchar(last + '0');
	return (last);
}
