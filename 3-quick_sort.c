#include "sort.h"


/**
 * swap -"Swaps two integers in an array.
 * @f: First integer to swap.
 * @s: Second integer to swap."
 */

void swap(int *f, int *s)
{
        int temp = *f;
        *f = *s;
        *s = temp;

}

/**
 * partition - "Order a subset of an array of intergers to lumto.
 * @array: An array of integers to sort.
 * @size: The length of the array.
 * @right: The ending index of the subset to  order.
 * @left: The starting index of the subset to order."
 *
 * Return: The final partition index.
 */

int partition(int *array, int left, int right, size_t size)
{
	int pivot = array[right];
	int i, j, temp;

	i = left;

	for (j = left; j < right; j++)
	{
		if (array[j] < pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (array[i] != array[j])
				print_array(array, size);
			i++;
		}
	}
	temp = array[i];
	array[i] = array[right];
	array[right] = temp;
	if (array[i] != array[right])
		print_array(array, size);
	return (i);
}

/**
 * quicksort - "Order a subset of an array of intergers to lumto.
 * @array: An array of integers to sort.
 * @right: The ending index of the subset to  order.
 * @left: The starting index of the subset to order.
 * @size: size of the array."
 *
 * Return: The final partiton index
 */

void quicksort(int *array, int left, int right, size_t size)
{
	int pi;

	if  (left < right)
	{
		pi = partition(array, left, right, size);
		quicksort(array, left, pi - 1, size);
		quicksort(array, pi + 1, right, size);
	}
}

/**
 * quick_sort -"Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The length of the array."
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quicksort(array, 0, (int)size - 1, size);
}
