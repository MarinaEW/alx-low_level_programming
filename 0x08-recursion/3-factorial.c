#include "main.h"
/**
 * factorial - fn. that returns the factorial of a given number.
 * @n: no. given
 * Return: factorial result
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n > 0)
{
return (n * factorial(n - 1));
}
else
{
return (1);
}
}
