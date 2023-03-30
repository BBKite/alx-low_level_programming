#include "main.h"

/**
* reverse_array - reverse the content of an array of integers
* @a: pointer to an array of integers
* @n: number of elements in the array
* Return: nothing
*/

void reverse_array(int *a, int n)
{
int i, j, holder;

j = n - 1;

for (i = 0; i < (n / 2) ; i++)
	{
	holder = a[i];
	a[i] = a[j];
	a[j--] = holder;
	}
}
