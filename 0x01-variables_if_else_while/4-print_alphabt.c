#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch == 'e' || ch == 'q')
	{
		continue;
	}
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
