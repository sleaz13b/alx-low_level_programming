#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*header added */
/*
 * main - Entry point
 *
 * Description: print variable n either positive negative
 *
 * Return - Always 0 (Success)
 */
/* betty style doc for function main goes there- done */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n ==0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
