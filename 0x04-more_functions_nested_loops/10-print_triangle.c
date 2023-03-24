#include "main.h"
/**
 * print_triangle -  function that prints a triangle
 * @size: parameter
 */
void print_triangle(int size)
{
int i;
if (size <= 0)
_putchar('\n');
else
{
for (i = 1 ; i <= size; i++)
{
int j;
for (j = 1 ; j <= size ; j++)
{
if ((i + j) <= size)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
}
