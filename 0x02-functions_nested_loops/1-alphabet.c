#include "main.h"
/**
 * main - print _alphabets followed by a new line
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
