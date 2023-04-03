#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: memory area pointed to
* @b: constant byte to be filled
* @n: first n-bytes filled
* Return: pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
	{
	s[i] = b;
	i++;
	}

return (s);
}
