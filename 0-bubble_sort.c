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
 * bubble_sort - "Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The length of the array."
 *
 * Description: Prints the array after each swap.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, l;
	int swapped;

	if (array == NULL || size == 0)
	{
		printf("Array is empty");
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;

		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				printf("After swap: ");

				for (l = 0; l < size; l++)
				{
					printf("%d ", array[l]);
				}
				printf("\n");
			}
		}
	}
	if (swapped == 0)
		break;
}
