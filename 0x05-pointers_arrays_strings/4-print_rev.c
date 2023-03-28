#include "main.h"

/**
* print_rev - prints a string in reverse, followed by a new line
* @s: pointer to string outside of function
* Return: nothing
*/

void print_rev(char *s)
{
int i, j, holder;

for (i = 0; s[i] != '\0'; ++i)
	{
	holder = i;
	}

for (j = holder; j >= 0; --j)
	{
	_putchar(s[j]);
	}

_putchar('\n');
}
