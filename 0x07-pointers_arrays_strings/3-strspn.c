#include "main.h"

/**
* _strspn - gets the length of prefix substring
* @s: pointer to initial segment of string
* @accept: pointer holding number of bytes
* Return: s' number of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, length = 0;

for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
			{
			length++;
			break;
			}
		}
	if (s[i] != accept[j])
		{
		return (length);
		}
	}
return (length);
}
