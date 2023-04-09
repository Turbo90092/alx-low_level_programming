#include "main.h"

/**
 * print_binary - prints the binary representatio
 * n of a number.
 * @n: unsigned long int n
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	for (int j = sizeof(unsigned long int) * 8 - 1; j >= 0; j--)
	{
		putchar((n >> j) & 1 ? '1' : '0');
	}
}
