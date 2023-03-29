#include "main.h"
#include <stdio.h>
/**
 * rev_string  -  function that reverses a string
 * @s: parameter
 *
 */
void rev_string(char *s)
{
int i;
int j;
char temp;
for (j = 0; s[j] != '\0' ; ++j)
for (i = 0; i < j / 2; i++)
{
temp = s[i];
s[i] = s[j - 1 - i];/* -1 indicates the array starts from 0*/
s[j - 1 - i] = temp;
}
}
