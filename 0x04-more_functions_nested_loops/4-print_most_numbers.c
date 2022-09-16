#include "main.h"

/**
 * print_most_numbers - prints numbers
 * Return: 0 or 1
 */
void print_most_numbers(void)
{
	char num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
		{
			_putchar(48 + num);
		}
			num++;
	}
	_putchar('\n');
}
