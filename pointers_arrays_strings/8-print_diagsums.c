#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals
 * @a: pointer to the matrix
 * @size: size of the square matrix
 *
 * Return: Nothing.
 **/

void print_diagsums(int *a, int size)
{
	int i;
	int sum_left;
	int sum_right;

	sum_left = 0;
	sum_right = 0;

	for (i = 0; i < size; i++)
	{
		sum_left += a[i * size + i];
		sum_right += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum_left, sum_right);
}

