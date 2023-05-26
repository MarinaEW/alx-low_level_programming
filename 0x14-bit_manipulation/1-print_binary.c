#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @k: unsigned long int
 * Return: not specified
 */

void print_binary(unsigned long int k)
{
	/* check if k is zero, if k is zero, binary representation is also zero*/

	if ((k >> 1) == 0 && k == 0)
	{
		_putchar('0');
		return;
	}

/*check if k still has some binary digits to print*/

if (k >> 1 != 0)
print_binary(k >> 1);
_putchar((k & 1) + '0');
}
