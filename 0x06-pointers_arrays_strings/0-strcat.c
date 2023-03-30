#include "main.h"
#include <stdio.h>
/**
 * _strcat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
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
for (k = 0; k <= srclen ; k++)
dest[destlen++] = src[k];
return (dest);
}
