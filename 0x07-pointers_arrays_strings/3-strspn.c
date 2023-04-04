#include "main.h"
/**
 * _strspn - fn. that gets the length of a prefix substring
 * @s: string to be checked
 * @accept: string that contains char. to be compared
 * Return: str1
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int str1;
unsigned int str2;
for (str1 = 0 ; s[str1] != '\0' ; str1++)
{
for (str2 = 0 ; accept[str2] != s[str2] ; str2++)
{
if (accept[str2] == '\0')
return (str1);
}
}
return (str1);
}
