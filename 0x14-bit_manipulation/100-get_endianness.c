#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 | 1
 */

int get_endianness(void)
{
	int n = 2;

	if (n & 1)
		return (0);
	else
		return (1);
}
