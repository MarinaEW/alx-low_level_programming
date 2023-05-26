#include "main.h"

/**
 * set_bit - sets a value of a bit to 1 at a given index
 * @num: pointer to a number
 * @index: index of the bit starting from zero
 * Return: 1 | -1 (if an error occured)
 */

int set_bit(unsigned long int *num, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*num |= (1 << index);
	return (1);
}
