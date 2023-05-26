#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int
 * @binary: points to a string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *binary)
{
	unsigned int i = 0;
	unsigned int res = 0;

if (binary == NULL)
return (0);

while (binary[i] != '\0')
{
if (binary[i] != '0' && binary[i] != '1')
return (0);
res <<= 1;

if (binary[i] & 1)
res += 1;
i += 1;
}
return (res);
}
