#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, lastsd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastsd = n % 10;
	if (lastsd > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastsd);
	else if (lastsd == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastsd);
	else if (lastsd < 6 && lastsd != 0)
		printf("Last digit of %d is %d and is less than 6 and not zero 0\n", n, lastsd);
	return (0);
}
