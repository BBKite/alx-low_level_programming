#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @d: received value of number passed to it
* Return: l_digit
*/

int print_last_digit(int d)
{
int l_digit;

if (d < 0)
	l_digit = (d % 10) * -1;
else
	l_digit = d % 10;

_putchar(l_digit + '0');

return (l_digit);
}
