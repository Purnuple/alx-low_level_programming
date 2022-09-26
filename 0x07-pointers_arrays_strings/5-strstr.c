#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: string to search
 * @needle: substring to locate
 * Return: if statements or null
 */
char *_strstr(char *haystack, char *needle)
{
	char *i;
	char *k;

	while (*haystack != '\0')
	{
		i = haystack;
		k = needle;

		while (*haystack != '\0' && *k != '\0' && *haystack == *k)
		{
			haystack++;
			i++;
		}
		if (!*k)
			return (i);
		haystack = i + 1;
	}
	return (0);
}
