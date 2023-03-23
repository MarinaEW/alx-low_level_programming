#include "main.h"
/**
 * more_numbers - function that prints no. from 0 to 9 - 10 times
 */
void more_numbers(void)
{
int i;
int j;
for (i = 1 ; i <= 10 ; i++)
{
for (j = 0 ; j <= 14 ; j++)
{
int m;
m = j;
if (j > 9)
{
_putchar(1 + 48);
m = j % 10;
}
_putchar(m + '0');
}
_putchar('\n');
}
}
