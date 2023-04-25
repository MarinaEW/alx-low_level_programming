#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: int
 * @argv: array of string
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
int mult;
if (argc == 3)
{
mult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mult);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
