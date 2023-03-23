#include "main.h"
/**
 * print_square - fn. that prints '#' for size times
 * @size: parameter
 */
void print_square(int size)
{
int i;
int j;
if (size <= 0)
_putchar('\n');
else
{
for (i = 1 ; i <= size ; i++)/*for rows*/
{
for (j = 1; j <= size ; j++)/*for columns*/
_putchar(35);/*prints '#'*/
_putchar('\n');
}
}
}
