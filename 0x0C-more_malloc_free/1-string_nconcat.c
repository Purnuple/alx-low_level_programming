#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings using
 * at most an inputted number of bytes.
 * @s1: The first string
 * @s2: The second string
 * @n: Te maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	mem = malloc(sizeof(char) * (len + 1));

	if (mem == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		mem[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		mem[len++] = s2[i];

	mem[len] = '\0';

	return (mem);
}
