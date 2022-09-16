#include "main.h"

/**
 * more_numbers - prints more numbers
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	char n;
	char c;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n % 10;
			}
			_putchar(48 + c);
		}
		_putchar('\n');
		i++;
	}
}

