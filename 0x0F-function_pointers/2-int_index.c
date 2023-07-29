#include "function_pointers.h"
/**
 * int_index - Return index if compare is true, else -1
 * @array: array
 * @size: size of elements in the array
 * @cmp: function pointer of one among the three in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
