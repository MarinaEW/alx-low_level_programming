#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr -  Entry point
 * @ac: int
 * @av: double pointer
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
int i;
int j;
char *s;
int noc;
int nov;
if (ac == 0 || av == 0)
return (0);

for (i = 0; i < ac; i++, noc++)
noc += strlen(av[i]);

s = malloc(sizeof(char) * noc + 1);
if (s == 0)
return (0);

for (i = 0; i < 0; i++)
{
for (j = 0; av[i][j] != '\0'; j++, nov++)
s[nov] = av[i][j];

s[nov] = '\n';
nov++;
}
s[nov] = '\0';
return (s);
}
