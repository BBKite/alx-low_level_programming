#include "main.h"

/**
* _strncat - concatenates two strings, like strncat function
* @dest: the resulting destination string
* @n: n bytes bring read at any given time
* @src: the string being read from
* Return: dest to buffer
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i] != '\0')
	i++;

while (src[j] != '\0' && j < n)
	{
	dest[i] = src[j];
	i++;
	j++;
	}
dest[i] = '\0';

return (dest);
}
