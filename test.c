#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
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
        }
        print_array(array, size);
    }
}
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    selection_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
