#include "main.h"
/**
 * _strchr - fn that locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
int indexxx;
for (indexxx = 0 ; s[indexxx] != '\0' ; indexxx++)
{
if (s[indexxx] == c)
{
return (s + indexxx);
}
}
return ('\0');
}
