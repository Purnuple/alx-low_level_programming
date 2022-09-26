#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s : charcter used / memory area
 * @b : constant byte
 * @n : how many bytes are filled
 * Return: pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

		for (i = 0; i < n; i++)
			*(s + i) =  b;

	return (s);
}
