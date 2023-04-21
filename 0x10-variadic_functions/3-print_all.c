#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - fn. prints anything
 * 
 *
 *
 */
void print_all(const char * const format, ...)
{
va_list list;
unsigned int i = 0;
char c;
int n;
float f;
char *s;

va_start(list, format);

