#include "sort.h"
/**
 * swap - swap integers
 * @x: pointer to int
 * @y: pointer to int
 * Return: void
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
