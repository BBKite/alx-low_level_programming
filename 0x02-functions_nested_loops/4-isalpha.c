#include "main.h"
/**
* _isalpha - Checks whether character is upper or lowercase alphabet only
* @c: this is character being checkeed
* Return: 1 if alphabet, 0 if anything other than alphabet
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
