#include "function_pointers.h"
/**
 * array_iterator -  a function that executes a function given as
 * a parameter on each element of an array.
 * @array: A pointer to array
 * @size: Size of the array
 * @action: action(function) to iterate throw array
 * Return: Nothing
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{

	int x = 0;

	if (action == NULL || array == NULL)
		return;

	for (; x < size; x++)
		action(array[x]);

}
