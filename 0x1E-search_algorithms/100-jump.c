#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0, i;

	if (array == NULL)
		return (-1);

	while (array[prev] < value && prev < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

	for (i = prev - step; i <= prev && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
