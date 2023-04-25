#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - fn. that adds positive numbers.
 * @argc: int
 * @argv: string
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
int sum = 0;
char *c;
if (argc == 1)
{
printf("0\n");
return (0);
}

while (--argc)
{
for (c = argv[argc]; *c; c++)
{
if (*c < 48 || *c > 57)
{
printf("Error\n");
return (1);
}
sum += atoi(argv[argc]);
}
}
printf("%d\n", sum);
return (0);
}
