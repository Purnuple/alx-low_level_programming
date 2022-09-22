#include "main.h"
/**
 * _strcat - concatenates two strings together
 * @dest : the pointer
 * @src : the variable being pointed to
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int k;

	i = 0;
	k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[k] != '\0')
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
