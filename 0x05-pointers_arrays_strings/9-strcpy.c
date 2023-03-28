#include "main.h"

/**
* _strcpy - copies the string pointed to by 'src' including null terminator
*			to the buffer pointed to by 'dest'
* @src: points to string outside of function
* @dest: the destination buffer
* Return: 'dest' pointer
*/

char *_strcpy(char *dest, char *src)
{
	int i, buff;

	buff = 0;

	while (src[buff] != '\0')
		++buff;

	for (i = 0; i < buff; ++i)
		{
		dest[i] = src[i];
		}
	dest[i] = '\0';

	return (dest);
}
