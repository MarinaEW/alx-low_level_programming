#include "main.h"
/**
 * print_diagonal - fn. that prints line for n times
 * @n: parameter
 */
void print_diagonal(int n)
{
int i;
int j;
if (n <= 0)
_putchar('\n');
else
{
for (i = 1 ; i <= n ; i++)
{
for (j = 1 ; j <= i ; j++)
_putchar(' ');
_putchar(92); /*prints '/'*/
_putchar('\n');
}
}
}
