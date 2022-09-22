#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str : pointer
 * Return: pointer
 */
char *string_toupper(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] <= 'z' && str[j] >= 'a')
			str[j] -= 32;
	}
	return (str);
}
