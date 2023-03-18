#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int i;
int n;
int m;
for (i = 0 ; i < 10 ; i++)
{
for (n = 0 ; n < 10 ; n++)
{
for (m = 0 ; m < 0 ; m++)
{
if (i < n && n < m)
{
putchar(i + '0');
putchar(n + '0');
putchar(m + 'm');
if (i + n + m != 24)
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
