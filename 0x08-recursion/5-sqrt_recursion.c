#include "main.h"
/**
 * _sqrt_recursion - fn. that returns the natural square root of a number.
 * 
 * square_no - fn. that computes the square of no. to help checking
 * @n: no. squared
 * 
 * @x: no.
 * 
 * Return: value
 */
int square_no(int n, int x)
/**
 * square_no - fn that computes the square of no. to help checking
 * @x: no.
 * @n: no. squared
 * Return: value or -1
 */
int _sqrt_recursion(int n)
	/**
 * _sqrt_recursion - fn. that returns the natural square root of a number.
 * @n: no. squared
 * Return: value
 */

/**
 * square_no - fn that computes the square of no. to help checking
 * @x: no.
 * @n: no. squared
 * Return: value or -1
 */
int square_no(int n, int x)
{
if (x * x == n)
{
return (x);
}
else if (x * x < n)
{
return (square_no(n, x + 1));
}
else
return (-1);
}

int _sqrt_recursion(int n)
{
return (square_no(n, 1));
}
