#include "main.h"
/**
 * _pow_recursion - fn. that returns the value of x raised to the power of y.
 * @x: no.
 * @y: power
 * Return: result
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
else
{
return (1);
}
}
