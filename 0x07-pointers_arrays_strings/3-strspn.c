#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string used
 * @accept: char used
 * Return: integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	for (i = 0; s[i] >= 48; i++)
	{
		for (j = 0; accept[j] > 48; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (k);
}
