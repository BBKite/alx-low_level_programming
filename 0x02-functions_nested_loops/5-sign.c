#include "main.h"
/**
* print_sign - prints the sign of an ASCII number
* @n: the number being printed
* Return:	1 when n is greater than zero
*		0 when n is zero
*		-1 when n is less than zero
*/
int print_sign(int n)
{
if (n > 0)
	{
	_putchar('+');
	return (1);
		}
else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
else
	{
	_putchar('-');
	return (-1);
	}
}
