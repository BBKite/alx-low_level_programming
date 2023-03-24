#include "main.h"

/**
* print_line -	prints a straight line in the terminal
*		using only _putchar function
* @n:	number of times character _ should be printed, where
*		n <= 0 only prints a blank line
* Return: void
*/

void print_line(int n)
{
int line;

for (line = 1; line <= n; line++)
	{
	_putchar(95);
	if (n == 0 || n < 0)
	continue;
	}

_putchar(10);
}

