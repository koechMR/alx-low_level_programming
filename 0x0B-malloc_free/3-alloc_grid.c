#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* alloc_grid - nested loop to make grind
*@width: checks the width
*@height: checks the height
*Return: NULL if failure
*/
int **alloc_grid(int width, int height)
{
int **num;
int i, n;

if (width <= 0 || height <= 0)
return (NULL);

num = malloc(sizeof(int) * height);

if (num == NULL)
{
free(num);
return (NULL);
}

for (i = 0; i < height; i++)
{
num[i] = malloc(sizeof(int) * width);
if (num == NULL)
{
free(num);
return (NULL);
}
for (n = 0; n < width; n++)
{
num[i][n] = 0;
}
}
return (num);
}
