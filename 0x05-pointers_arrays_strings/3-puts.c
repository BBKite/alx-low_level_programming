#include "main.h"

/**
* _puts - prints a string, followed by a new line
* @s: pointer to string outside of function
* Return: nothing
*/

void _puts(char *s)
{
int i;

for (i = 0; s[i] != '\0'; ++i)
	{
	_putchar(s[i]);
	}

_putchar('\n');
}
