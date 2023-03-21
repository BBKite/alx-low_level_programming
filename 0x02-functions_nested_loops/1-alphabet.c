#include "main.h"
/**
* print_alphabet - program prints the alphabet in lowercase
* _putchar use restricted to twice
* Return: void
*/

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
