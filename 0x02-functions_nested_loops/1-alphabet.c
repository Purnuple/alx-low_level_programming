#include "main.h"
/**
 * print_alphabet - Entry point
 *
 *Return: Always 0 (Sucesss)
 */
void print_alphabet(void)
{
	char letters = 'a';

	while (letters <= 'z')
	{
		_putchar(letters);
		letters++;
	}
	_putchar('\n');
}
