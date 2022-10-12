#include "function_pointers"
/**
 * int_index - earches for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to the comparing function
 *
 * Return: index of the first element
 * the cmp functiondoes not return 0, -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
