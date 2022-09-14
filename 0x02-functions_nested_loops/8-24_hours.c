#include "main.h"

/**
 *jack_bauer - check for every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int mins;
	int hrs;

	for (hrs = 0; hrs <= 23; ++hrs)
	{
		for (mins = 0; mins <= 59; ++mins)
		{
		_putchar((hrs / 10) + 48);
		_putchar((hrs % 10) + 48);
		_putchar(':');
		_putchar((mins / 10) + 48);
		_putchar((mins % 10) + 48);
		_putchar('\n');
		}
	}
}
