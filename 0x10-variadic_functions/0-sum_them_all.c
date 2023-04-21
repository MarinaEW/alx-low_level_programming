#include "variadic_functions.h"
/**
 * sum_them_all - sums var. arguements
 * @n: no. of arguements
 * @...: integers to be summed
 * Return: sum
 *
 */
int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int i;
int sum = 0;
if (n == 0)
return (0);
va_start(list, n);
sum = 0;
for (i = 0; i < n; i++)
sum = sum + va_arg(list, int);
va_end(list);
return (sum);
}
