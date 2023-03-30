#include "main.h"
#include <stdio.h>
/**
 * reverse_array - fn. that reverses the content of an array of integers
 * @a: fn. parameter
 * @n: no. of elements
 *
 */
void reverse_array(int *a, int n)
{
int i;
int j;
for (i = 0 ; i < n / 2 ; i++)
{
j = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = j;
}
}
