#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alf, e = 'e', q = 'q';

	for (alf = 'a'; alf <= 'z'; alf++)
	if (alf != e && alf != q)
	{
	putchar(alf);
	}
	putchar('\n');

	return (0);
}
