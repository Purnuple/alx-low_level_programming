#include "main.h"
/**
 * print_rev - prints a string in reverse followed a new line
 * @s : uses charcter s
 * Return: 0 or 1
 */
void print_rev(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	while (a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
