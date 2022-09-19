#include "main.h"
/**
 * _puts - will print a string, followed by a new line to stdout
 * @str : uses chacater str
 * Return: 1 or 0
 */
void _puts(char *str)
{
	int b = 0;

	while (str[b])
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}

