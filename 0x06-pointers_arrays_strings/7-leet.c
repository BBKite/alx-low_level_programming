#include "main.h"

/**
* leet - encodes string into 1337 Leet
* @s: pointer to string being encoded
* Return: resultant string
*/
char *leet(char *s)
{
int i, j;
char *lett = "aAeEoOtTlL";
char *num = "4433007711";

for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
		{
		if (s[i] == lett[j])
			s[i] = num[j];
		}
	}
return (s);
}
