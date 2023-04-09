#include "main.h"

/**
 * binary_to_uint -converts binary number
 * to an unsigned int.
 * @b: binary
 *
 * Returns: number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int lc;

	lc = 0;
	if (!b)
	{
		return (0);
	}
	n = 0;
	while (b[n] != '\0')
	{
		if (b[n] != '0' && b[n] != '1')
		{
		return (0);
		}
	n++;
	}
	n = 0;
	while (b[n] != '\0')
	{
		lc <<= 1;
		if (b[n] == '1')
		{
			lc = lc + 1;
		}
	n++;
	}
	return (lc);
}
