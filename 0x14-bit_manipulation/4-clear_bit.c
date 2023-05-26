#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @in: index of the bit starting from 0
 * @num: pointer to a number
 * Return: 1 | -1(if an error occured)
 */

int clear_bit(unsigned long int *num, unsigned int in)
{
	if (in >= sizeof(unsigned long int) * 8)
		return (-1);

	*num &= ~(1 << in);
	return (1);
}
