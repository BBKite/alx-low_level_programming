#include "main.h"

/**
* print_diagonal - prints a diagonal line, sloping downwards
* @n: is input for number of lines for diagonal effect
* Return: void
*/

void print_diagonal(int n)
{
	int y, x;

	if (n <= 0)
	{
	_putchar('\n');
	}

	else
	{
	for (y = 0; y < n; y++)
		{
		for (x = 0; x < n; x++)
			{
			if (x == y)
				_putchar('\\');
			else
				if (x < y)
					_putchar(' ');
			}

			_putchar('\n');
		}
	}
}
