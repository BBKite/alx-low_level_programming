#include "main.h"

/**
* _memcpy - copies memory area
* @dest: memory area pointed to
* @src: source character value being passed
* @n: n-bytes being copied from area
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

if (dest == 0)
	return (0);

while (i < n)
	{
	dest[i] = src[i];
	i++;
	}
return (dest);
}
