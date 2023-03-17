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
for (i = 0 ; i < 10 ; i++)
{
for (n = 0 ; n < 10 ; n++)
{
if (i != n && i < n)
{
putchar(i + '0');
putchar(n + '0');
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
