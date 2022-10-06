#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *mem_add = malloc(b);

	if (mem_add == NULL)
		exit(98);
	return (mem_add);
}
