#include "main.h"
/**
 *_abs - function that calculates the absolute of numbers
 *@p: parameter to be checked
 *
 * Return:  p
 */
int _abs(int p)
{
if (p < 0)
p = -1 * (p);
else if (p >= 0)
p = p;
return (p);
}
