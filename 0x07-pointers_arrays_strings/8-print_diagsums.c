#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints sum of square matrix diagonals
* @a: pointer to matrix of integers
* @size: the equal sides of a  square matrix
* Return: nothing
*/

void print_diagsums(int *a, int size)
{
int sum_left = 0, sum_right = 0;
int l = 0;

/*For right sloping diagonal*/
while (l < size)
	{
	sum_right += a[size * l + l];
	sum_left += a[size * (l + 1) - (l + 1)];
	l++;
	}

printf("%d, %d\n", sum_right, sum_left);
}
