#include <stdio.h>
/**
 * swap - swap two ints
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
/**
 * prnt - print the element of an array
 * @arr: Array to be printed
 * @size: size of the array
 * Return: void
 */
void prnt(int arr[], size_t size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
		if (i >= 0 && i < size - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
/**
 * bubble_sort - bubble sort an array
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				flag = 1;
			}
			if (flag == 1)
			{
				prnt(array, size);
			}
		}
	}
}
/**
 * main - main function
 * Return: void
 */
int main(void)
{
	int arr[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};

	size_t size = sizeof(arr) / sizeof(arr[0]);

	bubble_sort(arr, size);
	return (0);
}
