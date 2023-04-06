#include "main.h"

/**
 * check - function declaration
 * @num: number to test
 * @divisor: the divisor
 * Return: 0 or 1
 */

int check(int num, int divisor);

/**
 * is_prime_number - function definition
 * @n: number to test
 * Return: 0 or 1
 */

int is_prime_number(int n);

/**
 * check - function definition
 * @num: the number to test
 * @divisor: the divisor to use
 * Description: checks the divisibility of a number
 * Return: 0 for divisible, 1 for not
 */

int check(int num, int divisor)
{
if (num % divisor == 0)
{
return (0);
}
else if (divisor == num / 2)
{
return (1);
}
else
{
return (check(num, divisor + 1));
}
}

/**
 * is_prime_number - function definition
 * @n: the number to be tested
 * Description: find a prime number
 * Return: 0 for not prime, 1 for prime
 */

int is_prime_number(int n)
{
int divisor = 2;
if (n <= 1)
{
return (0);
}
else if (n >= 2 && n <= 3)
{
return (1);
}
else
{
return (check(n, divisor));
}
}
