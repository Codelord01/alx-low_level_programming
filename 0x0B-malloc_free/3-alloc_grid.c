#include<stdio.h>
#include<stdlib.h>

/**
 * alloc_grid - allocates memory to a two dimentional array
 * @width: stores the number of columns in the 2d array
 * @height: stores teh number of rows in the 2d array
 * Return: Returns an integer array
 **/

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * (height));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			return (NULL);
			free(arr);
		}

		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
