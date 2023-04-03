#include "main.h"

/**
* _strchr - locates a character in a string
* @s: pointer to string
* @c: character passed being sought
* Return: pointer s if character found, else null
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
	{
	if (*s == c)
		return (s);
	s++;
	}

return (0);
}
