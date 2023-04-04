#include "main.h"

/**
* _strstr - locates a substring
* @haystack: pointer to string being seached
* @needle: pointer to substring being sought
* Return: pointer to haystack if substring is located, else NULL
*/

char *_strstr(char *haystack, char *needle)
{
char *holder;

while (*haystack != '\0')
	{
	holder = haystack;
	while (*needle != '\0' && *haystack == *needle)
		{
		haystack++;
		needle++;
		}
	if (!*needle)
		return (holder);
	haystack++;
	}

return (0);
}
