#include "main.h"

/**
* string_toupper - changes all lowercase letter of a string to uppercase
* @s: pointer to string outside of function
* Return: resultant string
*/

char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
	{
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	}

return (s);
}