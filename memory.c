#include "shell.h"

/**
 * bfree - frees a pointer and NULLs the address
 * @ptr: address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
nt bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		ree(*ptr);
		ptr = NULL;
		return (1);
	}
	return (0);
}
