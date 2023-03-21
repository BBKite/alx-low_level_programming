#include "main.h"
/**
* print_alphabet_x10 - program prints the alphabet in lowercase ten times
* _putchar use restricted to twice
* Return: void
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char alph;

		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');
	}
}
