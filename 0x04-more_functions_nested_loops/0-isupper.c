#include "main.h"

/**
* _isupper -  checks if character is uppercase
* @c: character input being checked
* Return: 1 if uppercase, 0 if otherwise
*/

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
