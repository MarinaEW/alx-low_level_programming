#include "main.h"
#include <stdio.h>
/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: parameter
 */
void puts2(char *str)
{
int i;
for (i = 0 ; str[i] != '\0' ; i++)
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
