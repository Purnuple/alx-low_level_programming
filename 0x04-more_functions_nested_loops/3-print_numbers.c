#include "main.h"

/**
 * print_numbers - check the code
 * Return: 0 Always (Success)
 */
void print_numbers(void)
{
	char a = 0;

	while (a <= 9)
	{
		_putchar(48 + a);
		a++;
	}
	_putchar('\n');
}
