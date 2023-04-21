#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - fn. that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;
va_start(list , n);
if (n == 0)
{
printf("\n");
return;
}
for (i = 0 ; i < n ; i++)
{
printf("%d", va_arg(list, int));
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
