#include <stdio.h>
#include "sort.h"
/**
 * selection_sort - selection sorting array
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t temp, i, j, curr;

	for (i = 0; i < size - 1; i++)
	{
		temp = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[temp] > array[j])
			{
				temp = j;
			}
		}
		if (temp != i)
		{
			curr = array[temp];
			array[temp] = array[i];
			array[i] = curr;
			print_array(array, size);
		}
	}
}
