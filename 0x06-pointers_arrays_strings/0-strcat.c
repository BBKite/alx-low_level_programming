#include "main.h"

/**
* _strcat - concatenates two strings like strcat function
* @dest: final destination string
* @src: the string being appended to dest
* Return: dest to buffer
*/

char *_strcat(char *dest, char *src)
{
int i, j;

i = 0;

while (dest[i])
	i++;

for (j = 0; src[j]; j++)
	dest[i++] = src[j];

return (dest);
}
