#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup -  function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: the original string
 * Return: NULL if string is null, else pointer to the duplicated string
 */
char *_strdup(char *str)
{
int i;
int size;
char *ptr;
if (str == 0)
return (0);
for (size = 0; str[size] != '\0'; size++)
ptr = malloc(sizeof(*str) + 1);
/*+1 on the size puts the end of string character*/
if (ptr == 0)
return (0);
else
{
for (i = 0; i < size; i++)
ptr[i] = str[i];
}
return (ptr);
}
