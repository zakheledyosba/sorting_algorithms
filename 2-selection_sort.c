#include "sort.h"


/**
 * swap - Swaps two integers in an array.
 * @f: First integer to swap.
 * @s: Second integer to swap.
 */

void swap(int *f, int *s)
{
	int temp = *f;
	*f = *s;
	*s = temp;

}

/**
 * selection_sort - "Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The length of the array."
 *
 * Description: Prints the array after each swap.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, idx_min;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		idx_min = array + i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[idx_min])
			{
				idx_min = j;
			}
		}

		swap(&array[idx_min], &array[i]);
		for (j = 0; j < size; j++)
		{
			printf("%d ", array[j]);
		}
		printf("\n");

	}
}
