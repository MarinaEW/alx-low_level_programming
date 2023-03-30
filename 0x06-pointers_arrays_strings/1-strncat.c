#include "main.h"
#include <stdio.h>
/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: no. of bytes
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int destlen = 0;
int srclen = 0;
int j;
int k;
for (i = 0 ; dest[i] != '\0' ; i++)
destlen++;
for (j = 0 ; src[j] != '\0' ; j++)
srclen++;
for (k = 0 ; k < n && src[k] != '\0' ; k++)
dest[destlen + k] = src[k];
return (dest);
}
