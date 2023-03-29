#include "main.h"
#include <stdio.h>
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * If the number of characters is odd, the function should print the
 * last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: fn parameter
 *
 */
void puts_half(char *str)
{
int i;
int count = 0;
for (i = 0 ; str[i] != '\0' ; i++)
count++;
if (count % 2 == 0)
{
for (i = count / 2 ; str[i] != '\0' ; i++)
_putchar(str[i]);
}
else if (count % 2 != '\0')
{
for (i = (count - 1) / 2 ; str[i] != '\0' ; i++)
_putchar(str[i]);
}
_putchar('\n');
}
