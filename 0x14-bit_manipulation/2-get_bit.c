#include "main.h"

/**
 * get_bit - returns the value of a
 * bit at a given index.
 * @n: unsigned long int
 * @index: bit index
 *
 * Returns: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i, j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	i = 1 << index;
	j = n & i;
	if (i == j)
	{
		return (1);
	}
	return (0);
}
