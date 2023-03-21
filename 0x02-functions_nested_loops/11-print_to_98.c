#include "main.h"
#include <stdio.h>
/**
* print_to_98 -	prints all natural numbers from n to 98
*		with final number 98, irrespective of where
*		count start from either side to it
* @n: the input number that initialiases the count
* Return: void, nothing
**/
void print_to_98(int n)
{
int counter;

if (n < 98)
	{
	for (counter = n; counter < 98; counter++)
		printf("%d, ", counter);
	}
	else
	{
	for (counter = n; counter > 98; counter--)
		printf("%d, ", counter);
	}
printf("98\n");

}
