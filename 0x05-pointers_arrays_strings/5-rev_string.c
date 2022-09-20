#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s : uses charcter s
 * Return: 1 or 0
 */
void rev_string(char *s)
{
	int l, i, half;
	char tmp;

	for (l = 0; s[l] != '\0'; l++)
		i = 0;
	half  = l / 2;

	while (half--)
	{
		tmp = s[l - i - 1];
		s[l - i - 1] = s[i];
		s[i] = tmp;
		i++;
	}
}

