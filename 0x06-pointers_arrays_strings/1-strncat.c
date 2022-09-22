#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest : character used
 * @src : charcter used
 * @n : integer used
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int k = 0;
	int j = 0;

	while (dest[k] != '\0')
	{
		k++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[k] += src[j];
		k++;
		j++;
	}
	dest += '\0';

	return (dest);
}
