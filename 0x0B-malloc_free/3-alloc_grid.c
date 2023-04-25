#include "main.h"
/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to 2d array of integers, otherwise NULL
 */

int **alloc_grid(int width, int height)
{
int **size, i, j;
size = malloc(sizeof(*size) * height);
if (width <= 0 || height <= 0 || size == 0)
{
return (0);
}
else
{
for (i = 0; i < height; i++)
{
size[i] = malloc(sizeof(**size) * width);
if (size[i] == 0)
{
/*free everything if malloc fails*/
while (i--)
free(size[i]);
free(size);
return (0);
}
for (j = 0; j < width; j++)
size[i][j] = 0;
}
}
return (size);
}
