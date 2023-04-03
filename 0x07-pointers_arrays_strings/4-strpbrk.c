#include "main.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: pointer to string being searched
* @accept: pointer where string first occurrence is
* Return: pointer to s if bytes match in pointer accept, else NULL
*/

char *_strpbrk(char *s, char *accept)
{
char *holder;

if (s == 0 || accept == 0)
	{
	return (0);
	}

while (*s != '\0')
	{
	holder = accept;
	while (*holder != '\0')
		{
		if (*s == *holder)
			{
			return (s);
			}
		holder++;
		}
	s++;
	}
return (0);
}
