#include "main.h"

/**
* rev_string - reverses a string
* @s: pointer to string outside of function to be reversed
* Return: nothing
*/

void rev_string(char *s)
{
int i, j;
char holder;

for (i = 0; s[i] != '\0'; ++i)
	continue;

for (j = 0; j < i / 2; ++j)
	{
	holder = s[j];
	s[j] = s[i - 1 - j];
	s[i - 1 - j] = holder;
	}
}
