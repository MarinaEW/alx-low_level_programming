#include "main.h"
/**
 * print_sign - function that prints signs
 *
 * @n: parameter to be checked
 * Return: 0 if no. is 0
 * and 1 otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
_putchar(' ');
return (1);
}
else if (n == 0)
{
_putchar('0');
_putchar(' ');
return (0);
}
else
{
_putchar('-');
_putchar(' ');
return (-1);
}
}
