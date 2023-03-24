#include "main.h"

/**
* print_square - funtion that prints a square
* @size: input number determines the length of square's size;
*		 0 or less as input prints only a new line
* Return: void
*/

void print_square(int size)
{
int y, x;

	if (size <= 0)
	{
	_putchar(10);
	}

	else
	for (y = 1; y <= size; y++)
	{
	for (x = 1; x <= size; x++)
	_putchar(35);
	_putchar(10);
	}
}
