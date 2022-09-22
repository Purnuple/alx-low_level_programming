#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @s : character used
 * Return: pointer
 */
char *leet(char *s)
{
	int k, j;
	char s1[] = "aeotl";
	char s3[] = "AEOTL";
	char s2[] = "43071";

	for (k = 0; s[k] != '\0'; k++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[k] == s1[j] || s[k] == s3[j])
			{
				s[k] = s2[j];
				break;
			}
		}
	}
	return (s);
}
