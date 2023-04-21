#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - fn. that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list(list);
unsigned int i;
char *string;
va_start(list, n);
for (i = 0; i < n; i++)
{
string = va_arg(list, char*);
if (string)
printf("%s", string);
else
printf("(nil)");
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(list);
printf("\n");
}
