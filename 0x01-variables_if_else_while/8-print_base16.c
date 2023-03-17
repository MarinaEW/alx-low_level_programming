#include <stdio.h>
/**
 * main- Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
int h;
char m;
for (h = 0 ; h <= 9 ; h++)
putchar(h + '0');
for (m = 'a' ; m <= 'f' ; m++)
putchar(m);
putchar('\n');
return (0);
}
