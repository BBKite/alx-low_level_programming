#include "main.h"

/**
* more_numbers - prints ten lines of numbers 0 to 14
*
* Return: void
*/

void more_numbers(void)
{
int i = 0, j;

while (i < 10)
	{
	j = 0;
	while (j <= 14)
		{
		if (j >= 10)
		_putchar((j / 10) + '0');	
		_putchar((j % 10) + '0');
		j++;
		}

	_putchar(10);
	i++;
	}

_putchar(10);
}
