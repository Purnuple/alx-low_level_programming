#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest : character used
 * @src : character used
 * Return: 1 or 0
 */
char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');
	return (dest);
}
