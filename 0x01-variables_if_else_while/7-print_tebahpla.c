#include <stdio.h>
/**
 * main - Entry point
 *
 * Return : always 0 (Success)
 */
int main(void)
{
	char letters = 'z';

	while (letters >= 'a')
	{

		putchar(letters);
		letters--;

	}
	putchar('\n');
	return (0);
}
