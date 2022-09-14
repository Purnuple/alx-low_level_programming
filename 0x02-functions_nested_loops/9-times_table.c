#include "main.h"

/**
 * times_table - print the times table
 * Return: Always 0
 */
void times_table(void)
{
	int i = 0;
	int b;
	int rept;

	while (i <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			rept = i * b;
			if (b == 0)
			{
				_putchar(48 + rept);
			}
			else
			{
				_putchar(48 + rept / 10);
				_putchar(48 + rept % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		i++;
	}
}
