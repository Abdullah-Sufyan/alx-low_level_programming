#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints every array element on a new line
 * @array: array
 * @size: number of elements to print
 * @action: print pointer in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
	action(array[x]);
	}
}	
