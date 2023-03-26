#include "main.h"

/**
* print_triangle - prints a triangle of from input variable size
* if size is 0 or less, a new line is printed instead
* @size: input number for trianle size
* Return: void
*/

void print_triangle(int size)
{
int y, x;

	if (size <= 0)
		_putchar(10);

	for (y = 0; y < size; y++)
		{
		for (x = 0; x < size; x++)
			if (x > size - y - 2)
				{
				_putchar(35);
				}
		else
				_putchar(32);
	_putchar(10);
		}
}
