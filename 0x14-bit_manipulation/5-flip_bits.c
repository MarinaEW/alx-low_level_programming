#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @no: contains the bits to be flipped
 * @f: we are flipping to get here
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int no, unsigned long int f)
{
	unsigned long int x;
	unsigned long int i = 0;

	x = no ^ f;

	for (i = 0; x != 0; i += 1)
		x &= (x - 1);
	return (i);
}
