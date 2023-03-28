#include "main.h"

/**
* swap_int - exchanges the values two integers around
* @a: pointer to int a's value outside of function
* @b: pointer to int b's value outside of function
* holder: temporary value holder
* Return: nothing
*/

void swap_int(int *a, int *b)
{
int holder;

	holder = *a;

	*a = *b;

	*b = holder;
}
