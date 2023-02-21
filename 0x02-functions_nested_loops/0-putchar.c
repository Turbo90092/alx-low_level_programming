# include "main.h"


/**
 *main -  prints _putchar, followed by a new line..
 *Description: Entry point
 *that contains the function _putchar
 *Return: 0.
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	i = 0;
	while (str[i])
	{
		putchar(str[i]);
		++i;
	}
	putchar('\n');

	return (0);
}
