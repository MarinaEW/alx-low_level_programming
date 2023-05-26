#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index starting from 0 of the bit you want to get
 * @b: bit to be checked
 * Return: index | -1
 */

int get_bit(unsigned long int b, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((b & (1 << index)) ? 1 : 0);
}
