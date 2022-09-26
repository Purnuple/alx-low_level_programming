#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string used
 * @c: character used
 * Return: the pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int k = 0;

	for (; *(s + k) != '\0'; k++)
		if (*(s + k) == c)
			return (s + k);
	if (*(s + k) == c)
		return (s + k);
	return ('\0');
}
