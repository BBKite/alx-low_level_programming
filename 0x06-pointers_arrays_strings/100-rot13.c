#include "main.h"

/**
* rot13 - encrypts string using rot13
* @s: points to string being encypted
* Return: string of  encrypted characters
*/

char *rot13(char *s)
{
int i, j;
char fwd[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rwd[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; s[j] != '\0'; j++)
		{
		if (s[i] == fwd[j])
			{
			s[i] = rwd[j];
			break;
			}
		}
	}
return (s);
}
