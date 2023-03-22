#include "main.h"
/**
 * _islower - function that detects lower case
 *@c:  parameter to be printed
 * Return - 0 means it is lowercase
 * and 1 means otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (0);
else
return (1);
}
