#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - return a pointer
 * @str: str
 * Return: 0.
 */
char *_strdup(char *str)
{
	char *newstr;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	i = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	newstr = malloc(len * sizeof(*str));
	if (newstr == NULL)
		return (NULL);
	while (i <= len)
	{
		newstr[i] = str[i];
		i++;
	}
	return (newstr);
}

