#include "main.h"

/**
 * get_bit - returns the value of a
 * bit at a given index.
 * @n: unsigned long int
 * @index: bit index
 *
 * Returns: the value of the bit at index
 */

void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}

