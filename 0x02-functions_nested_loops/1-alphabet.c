#include "main.h"
/**
 * main- Entry point
 *
 * print_alphabet: function that prints lowercase alphabets
 *
 * Return: always 0 (success)
 */
void print_alphabet(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
}
