#include "main.h"

/**
 * int _strlen -  returns the length of a string
 * @s: uses charcter s
 * Return: 1 or 0
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;

	}
	return (a);
}
