#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: contains contents of string 1
 * @s2: contains contents of string 2
 * Return: NULL on failure, pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
int size_s1;
int size_s2;
int i;
char *ptr;
if (s1 == 0)
{
s1 = "\0";
}
if (s2 == 0)
{
s2 = "\0";
}
size_s1 = strlen(s1);
size_s2 = strlen(s2);
ptr = malloc((size_s1 + size_s2) *sizeof(char) + 1);
if (ptr == 0)
return (0);
for (i = 0; i <= size_s1 + size_s2; i++)
{
if (i < size_s1)
ptr[i] = s1[i];
else
ptr[i] = s2[i - size_s1];
}
ptr[i] = '\0';
return (ptr);
}
