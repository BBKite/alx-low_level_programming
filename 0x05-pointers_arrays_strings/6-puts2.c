#include "main.h"

/**
* puts2 - prints the alternate character of a string starting
*	from the first character
* @str: pointer to string outside of function
* Return: nothing
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		{
		if (i % 2 == 0)
			_putchar(str[i]);
		}
	_putchar('\n');
}
